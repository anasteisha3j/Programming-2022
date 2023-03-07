/*��������� ����������� ��� �������� (�����, �����, ����). ��������� 2 ������ �� ����� ����:
��������� ������� (����, �ᒺ� ����� ), ������������ (����� 䳿, �������� ������������� ).   
� ���� ��������� ������ ������ ��� ��� �������� ���� ����� ����. ������� �� ��� � ���� �����
� ������� � ��������� ����: 1)�� ��������, ���������� �� ����� �� ����������� �������� ����; 
2) ������������ � �������������� */
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Phone {
protected:
	string Name;
	string Brand;
	int Price;
public:
	Phone(string N, string B, int P) :Name(N), Brand(B), Price(P) {};
	virtual void Input(istream&is) {
		is >> Name;
		is >> Brand;
		is >> Price;
	}
	friend istream& operator>>(istream& is, Phone& P) {
		P.Input(is);
		return is;
	}
	virtual void Print(ostream& os) {
		os << "Name:" << Name << ". Brand: " << Brand << ". Price: " << Price << endl;
	}
	friend ostream& operator<<(ostream& os, Phone& P) {
		P.Print(os);
		return os;
	}
	bool operator<(Phone& P) {
		return (Price < P.Price);
	}
	virtual int GetPrice() = 0;
	static bool sort(Phone* a, Phone* b) {
		return a->GetPrice() < b->GetPrice();
	}
};
class MobileP:public Phone {
private:
	string Color;
	int Memory;
public:
	MobileP(string Name, string Brand, int Price, string C, int M) :
		Phone(Name, Brand, Price), Color(C), Memory(M) {};
	void Input(istream&is) {
		Phone::Input(is);
		is >> Color;
		is >> Memory;
	}
	void Print(ostream& os) {
		Phone::Print(os);
		os << "Color: " << Color << ". Memory: " << Memory << endl;
	}
	virtual int GetPrice() {
		return Price;
	}
};

class RadioP:public Phone {
private:
	int Radius;
    bool HasAuto;
public:
	RadioP(string Name, string Brand, int Price, int R, bool A) :
		Phone(Name, Brand, Price), Radius(R), HasAuto(A) {};
	void Input(istream& is) {
		Phone::Input(is);
		is >> Radius;
		is >> HasAuto;
	}
	void Print(ostream& os) {
		Phone::Print(os);
		os << "Working Radius " << Radius << ". Answering machine: " << HasAuto << endl;
	}
	int GetPrice() {
		return Price;
	}

};

int main() {

	ifstream file("mob.txt");
	ifstream file2("radio.txt");
	// ������ ��� � �����
	vector<Phone*> telephones;
	string name, brand, color, has_auto;
	int price, radius;
	int memory;

	// Reading data from mobile phone file
	while (file >> name >> brand >> price >> color >> memory) {
		telephones.push_back(new MobileP(name, brand, price, color, memory));
	}
	file.close();

	// Reading data from radio phone file
	while (file2 >> name >> brand >> price >> radius >> has_auto) {
		telephones.push_back(new RadioP(name, brand, price, radius, has_auto == "Yes"));
	}
	file2.close();

	// Printing data
	for (auto phone : telephones) {
		cout << *phone << endl;
	}

	 //Sorting phones by price
	//sort(telephones.begin(), telephones.end(), Phone::sort);
	

	 //Printing sorted phones
	/*cout << "Phones sorted by price:" << endl;
	for (auto phone : telephones) {
		cout << *phone << endl;
	}*/

	// Deleting dynamically allocated objects
	for (auto phone : telephones) {
		delete phone;
	}

	return 0;
}
