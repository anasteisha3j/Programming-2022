#include <iostream>
#include <string>
#include <array>

using namespace std;
/***********1***************/
/*class Customer {
private:
    string name;
    string address;
    string phone;

public:
    Customer(string n_name, string n_address, string n_phone) {
        name = n_name;
        address =n_address;
        phone = n_phone;
    }
    string getName() {
        return name;
    }
    string getAddress() {
        return address;
    }
    string getPhone() {
        return phone;
    }
};

class BankAccount {
private:
    Customer* customer;
    string accountNumber;
    double balance;

public:
    BankAccount(Customer* m_customer, string m_accountNumber, double m_balance)
    {
        customer = m_customer;
        accountNumber = m_accountNumber;
        balance = m_balance;
    }

    Customer* getCustomer() {
        return customer;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        }
        else {
            cout << "Insufficient funds" << endl;
        }
    }

    void display() {
        cout << "Customer Name: " << customer->getName() << endl;
        cout << "Customer Address: " << customer->getAddress() << endl;
        cout << "Customer Phone: " << customer->getPhone() << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    
    Customer c1("John", "Main Street", "654321");
    Customer c2("Jane", "Main St", "123456");
    Customer c3("Kyle", "Free St", "554633");
    Customer c4("Stan", "New St", "728132");
    Customer c5("Kenny", "Broke st", "837264");

    BankAccount account1(&c1, "1", 50.0);
    BankAccount account2(&c2, "2", 100.0);
    BankAccount account3(&c3, "3", 60.0);
    BankAccount account4(&c4, "4", 900.0);
    BankAccount account5(&c5, "5", 450.0);

    //account information
    cout << "Account 1:" << endl;
    account1.display();
    cout << endl;
    cout << "Account 2:" << endl;
    account2.display();
    cout << endl;
    cout << "Account 3:" << endl;
    account3.display();
    cout << endl;
    cout << "Account 4:" << endl;
    account4.display();
    cout << endl;
    cout << "Account 5:" << endl;
    account5.display();
    cout << endl;

    // deposit and withdraw money
    account1.deposit(100.0);
    account1.withdraw(50.0);

    account2.deposit(50.0);
    account2.withdraw(150.0);

    account3.deposit(80.0);
    account3.withdraw(60.0);

    account4.deposit(500.0);
    account4.withdraw(10.0);

    account5.deposit(150.0);
    account5.withdraw(90.0);

    //updated account information
    cout << "Updated Account 1:" << endl;
    account1.display();

    cout << endl;

    cout << "Updated Account 2:" << endl;
    account2.display();

    cout << endl;
    //by name
    string searchName;
    cout << "Enter customer name to search for: ";
    getline(cin, searchName);

    if (searchName == account1.getCustomer()->getName()) {
        cout << "Account found:" << endl;
        account1.display();
    }
    else if (searchName == account2.getCustomer()->getName()) {
        cout << "Account found:" << endl;
        account2.display();
    }
    else {
        cout << "Account not found" << endl;
    }

    cout << endl;
    //by address
    string searchAddress;
    cout << "Enter customer address to search for: ";
    getline(cin, searchAddress);
    if (searchAddress == account1.getCustomer()->getAddress()) {
        cout << "Account found:";
        account1.display();
    }
    else if (searchAddress == account2.getCustomer()->getAddress()) {
        cout << "Account found:";
        account2.display();
    }
    else {
        cout << "Account not found";
    }

    return 0;
}*/

/***********2**************/
class Student {
private:
    string S_Name;
    int S_id;
    string S_Speciality;
public:
    Student(string name, int id, string speciality) :
        S_Name(name), S_id(id), S_Speciality(speciality) {};
    string GetS_Name() {
        return S_Name;
    }
    int Getid() {
        return S_id;
    }
    string GetS_speciality() {
        return S_Speciality;
    }
     
};
class Course {
private:
    string C_Name;
    int C_Number;
    string C_Speciality;
public:
    Course(string name, int number, string speciality) :
        C_Name(name), C_Number(number), C_Speciality(speciality) {};
    string GetName() {
        return C_Name;
    }
    int GetNumber() {
        return C_Number;
    }
    string GetSpeciality() {
        return C_Speciality;
    }




};
class University {
private:
    string name_;
    string location_;
    array <Course, 10> course_;
    array<Student, 10> student_;
    int courseNum = 0;
    int studentNum = 0;
public:
    University(string name, string location):
        name_(name), location_(location) {};
    void AddCource(Course cource) {
        course_[courseNum++] = cource;
    }
    void DeleteCource(int numb);
    void AddStudent(Student student) {
        student_[studentNum++] = student;
    }
    void DeleteStudent(int id);
    void PrintC();
    void PrintS();
    void PrintSinC(int numb);
    void PrintCforS(int id);


};


