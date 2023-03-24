//Розробити ієрархію класів для ромбовидного наслідування : транспортний засіб(об’єм двигуна, назва) 1) 
//водний засіб(тип водойми, max швидкість у воді), 2)наземний транспорт(max швидкість, кількість місць).
//Від 1) і 2) наслідується трансорт - амфібія(max кількість годин у воді і на суші).
//Ввести дані про 10 різних транспортних засобів : водні, наземні і амфібії(човен, підводний човен, вантажівка, всюдихід, …)
//в один масив, видрукувати дані про всі транспортні засоби.Посортувати їх за назвою.Знайти засіб з найбільшим і
//найменшим об’ємом двигуна.Видрукувати окремо водний транспорт, і окремо транспорт - амфібію


#include <iostream>
#include <fstream>
using namespace std;

class Transport {
protected:
	string Name;
	int Capacity;
public:
	virtual ~Transport() = default;
	Transport(string n, int c) :Name(n),Capacity(c) {};
	virtual void Input(istream& is) {
		is >> Name;
		is >> Capacity;
	}
	friend istream& operator>>(istream& is, Transport& T) {
		T.Input(is);
		return is;
	}
	virtual void Print(ostream& os) {
		os << "Name: " << Name << ". Engine capacity: " << Capacity << endl;
	}
	friend ostream& operator<<(ostream& os, Transport& T) {
		T.Print(os);
		return os;
	}
	string GetName() {
		return Name;
	}
	int GetCap() {
		return Capacity;
	}
	static bool sort(Transport*a,Transport*b){
	return (a->GetName() < b->GetName());
	}
  /*  static bool MaxCap(const Transport*a,const Transport*b){
		return (a->GetCap() < b-> GetCap());
	}*/

};

class Water:virtual public Transport {
protected:
	string Type;//sea,lake...
	int max_w_speed;
public:
	Water(string n,int c,string type, int m_w_sp) :Transport(n,c), Type(type), max_w_speed(m_w_sp) {};

	void Input(istream&is) {
		Transport::Input(is);
		is >> Type;
		is >> max_w_speed;
	}
	void Print(ostream& os) {
		Transport::Print(os);
		os << "Type: " << Type << ". Max water speed: " << max_w_speed<<endl;
	}

};

class Earth:virtual public Transport {
protected:
	string Type;
	int max_speed;
	int Seats;
public:
	Earth(string n,int c,string t, int m_sp, int seats): Transport(n,c),Type(t),max_speed(m_sp), Seats(seats) {};

	void Input(istream& is) {
		Transport::Input(is);
		is >> Type;
		is >> max_speed;
		is >> Seats;
	}
	void Print(ostream& os) {
		Transport::Print(os);
		os << "Type: "<<Type<<"Max speed on land : " << max_speed << ".Seats : " << Seats << endl;
	}

};
class Amphibian:public Water, public Earth {
private:
	int max_time_w;
	int max_time_e;
public:
	Amphibian(string n,int c,string Type, int m_w_speed,string t, int m_speed, int Seats, int m_timew, int m_timee) :
		Transport(n,c),Water(n,c,Type, m_w_speed), Earth(n,c,t,m_speed, Seats), max_time_w(m_timew), max_time_e(m_timee){};

	void Input(istream& is) {
		Transport::Input(is);
		Water::Input(is);
		Earth::Input(is);
		is >> max_time_w;
		is >> max_time_e;
	}
	void Print(ostream& os) {
		Transport::Print(os);
		Water::Print(os);
		Earth::Print(os);
		os << "Max time: 1.In water: " << max_time_w << " 2.On earth: " << max_time_e<<endl;
	
	 }
};

int main() {
	string name, type,type1;
	int capacity, max_w_speed, max_speed, seats, max_time_w, max_time_e;
	ifstream file("Info.txt");
	Transport* T[100]; // assuming a maximum of 100 elements in the file
	int i = 0;
	while (file >> name >> capacity >> type) {
		if (type == "sea" || type == "lake" || type == "ocean") {
			file >> max_w_speed;
			T[i] = new Water(name, capacity, type, max_w_speed);
			cout << *T[i] << endl;
		}
		else if (type=="none") {
			file >> max_speed >> seats;
			T[i] = new Earth(name, capacity, type, max_speed, seats);
			cout << *T[i] << endl;
		}
		else if(type=="lake"||type=="pound"||type1=="rock"||type=="field") {
			file >> max_w_speed >> max_speed >> seats >> max_time_w >> max_time_e;
			T[i] = new Amphibian(name, capacity, type, max_w_speed, type1, max_speed, seats, max_time_w, max_time_e);
			cout << *T[i] << endl;
		}
		i++;
	}

	
	file.close();

	system("pause");
	return 0;
}

