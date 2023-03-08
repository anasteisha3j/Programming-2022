//Визначити тип «Шпаргалка»(предмет, номер) та похідні від нього типи 
//«Паперова»(розмір, місце переховування) та «Електронна»(назва носія).
//Визначити тип «Студент»(ПІП, група, масив шпаргалок).
//В текстовому файлі задано дані про n студентів.Зчитати ці дані у масив
//і видрукувати у текстовий файл список всіх шпаргалок, посортованих за 
//предметом та номерами.В інший текстовий файл вивести всі електронні
//шпаргалки на носіях «комп» та їх кількість.
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Note{
private:
	string Subject;
	int Number;
public:
	Note(string s, int n) :Subject(s), Number(n) {};
	virtual void Input(istream& is) {
		is >> Subject;
		is >> Number;
	}
	friend istream& operator>>(istream& is, Note N) {
		N.Input(is);
		return is;
	}
	virtual void Print(ostream& os) {
		os << "Suject " << Subject << ". Number:" << Number << endl;
	}
	friend ostream& operator<<(ostream& os, Note& N) {
		N.Print(os);
		return os;
	}
 bool compare_notes(Note*a,Note*b) {
	 if (a->Subject < b->Subject) {
		 return a->Number < b->Number;
	}
	 else {
		 return a->Subject < b->Subject;
	 }
}

};
class Paper:public Note {
private:
	int Size;
	string Place;
public:
	Paper(string s, int n, int size, string place) :Note(s, n), Size(size), Place(place) {};
	void Input(istream& is) {
		Note::Input(is);
		is >> Size;
		is >> Place;
	}
	void Print(ostream& os) {
		Note::Print(os);
		os << "Size: " << Size << ". Place: " << Place << endl;
	}
};
class Elect:public Note {
private:
	string device;
public:
	Elect(string s, int n, string dev) :Note(s, n), device(dev) {};
	void Input(istream& is) {
		Note::Input(is);
		is >> device;
	}
	void Print(ostream& os) {
		Note::Print(os);
		os << "Device: " << device << endl;
	}

};
class Student {
private:
	string Name;
	int Group;
	vector<Note*> notes;
public:
	Student(string n, int g) :Name(n), Group(g){};
	void Input(istream& is) {
		is >> Name;
		is >> Group;
		char type;
		while (is >> type) {
			if (type == 'P') {
				string subject;
				int number, size;
				string place;
				is >> subject >> number >> size >> place;
				notes.push_back(new Paper(subject, number, size, place));
			}
			else if (type == 'E') {
				string subject;
				int number;
				string device;
				is >> subject >> number >> device;
				notes.push_back(new Elect(subject, number, device));
			}
			else {
				break;
			}
		}
	}

	friend istream& operator>>(istream& is, Student S) {
		S.Input(is);
		return is;
	}
	void Print(ostream& os) {
		os << "Student's name: " << Name << ". Group:" << Group << endl;
	}
	friend ostream& operator<<(ostream& os, Student& S) {
		S.Print(os);
		return os;
	}
};
int main() {
	vector<Student> students;
	ifstream file("students.txt");
	Student s("", 0);
	/*while (file >> s) {
		students.push_back(s*/




	return 0;
}