#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    int age;
public:
    Person() = default;
    Person(const char* n, int a)
    {
        name.append(n);
        age = a;
    }
    void Input()
    {
        cout << "Input name: ";
        cin >> name;
        cout << "Input age: ";
        cin >> age;
    }
    void Output()
    {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};

class Student :public Person
{
    string Academy;
public:
    Student() :Person() {}
    Student(const char* n, int a, const char* Ac) :Person(n, a)
    {
        Academy.append(Ac);
    }
    void Input()
    {
        Person::Input();
        cout << "Input academy: ";
        cin >> Academy;
    }
    void Output()
    {
        Person::Output();
        cout << "Academy: " << Academy << endl;
    }
};

class Teacher :public Person
{
    string school;
    string subject;
public:
    Teacher() :Person() {};
    Teacher(const char* n, int a, const char* scl, const char* subj) :Person(n, a)
    {
        school.append(scl);
        subject.append(subj);
    }
    void Input()
    {
        Person::Input();
        cout << "Input school: ";
        cin >> school;
        cout << "Input subject: ";
        cin >> subject;
    }
    void Output()
    {
        Person::Output();
        cout << "School: " << school << "\tSubject: " << subject << endl;
    }
};

class Doctor :public Person
{
    string hospital;
    double salary;
public:
    Doctor() :Person() {};
    Doctor(const char* n, int a, const char* h, double s) :Person(n, a)
    {
        hospital.append(h);
        salary = s;
    }
    void Input()
    {
        Person::Input();
        cout << "Input hospital: ";
        cin >> hospital;
        cout << "Input salary: ";
        cin >> salary;
    }
    void Output()
    {
        Person::Output();
        cout << "Hospital: " << hospital << "\tSalary: " << salary << endl;
    }
};

class Director :public Person
{
    string school;
    double salary;
public:
    Director() :Person() {};
    Director(const char* n, int a, const char* scl, double s) :Person(n, a)
    {
        school.append(scl);
        salary = s;
    }
    void Input()
    {
        Person::Input();
        cout << "Input school: ";
        cin >> school;
        cout << "Input salary: ";
        cin >> salary;
    }
    void Output()
    {
        Person::Output();
        cout << "School: " << school << "\tSalary: " << salary << endl;
    }
};

int main()
{
    Student obj1("Irina", 20, "IT STEP Academy");
    obj1.Output();
    obj1.Input();
    obj1.Output();

    Teacher obj2("Oleksandra", 30, "IT STEP", "Math");
    obj2.Output();
    obj2.Input();
    obj2.Output();

    Doctor obj3;
    obj3.Input();
    obj3.Output();

    Director obj4;
    obj4.Input();
    obj4.Output();
}

