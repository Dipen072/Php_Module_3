#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Function to display common details
    void displayPersonInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;
    int studentID;

public:
    // Constructor
    Student(string n, int a, string c, int id) : Person(n, a), course(c), studentID(id) {}

    // Function to display student details
    void displayStudentInfo() {
        displayPersonInfo();  // Reusing base class function
        cout << "Student ID: " << studentID << ", Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;
    double salary;

public:
    // Constructor
    Teacher(string n, int a, string sub, double sal) : Person(n, a), subject(sub), salary(sal) {}

    // Function to display teacher details
    void displayTeacherInfo() {
        displayPersonInfo();  // Reusing base class function
        cout << "Subject: " << subject << ", Salary: " << salary << endl;
    }
};

// Main function
main() 
{
    // Create a Student object
    Student s1("Alice", 20, "Computer Science", 101);
    cout << "--- Student Info ---" << endl;
    s1.displayStudentInfo();

    cout << endl;

    // Create a Teacher object
    Teacher t1("Dr. Smith", 45, "Mathematics", 60000);
    cout << "--- Teacher Info ---" << endl;
    t1.displayTeacherInfo();

    return 0;
}

