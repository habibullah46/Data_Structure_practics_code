#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string id;
    string grade;

public:
    Student() {
        cout << "Creating a Student object" << endl;
        name = "";
        id = "";
        grade = "";
    }

    Student(string name, string id, string grade) {
        cout << "Creating a Student object with parameters" << endl;
        this->name = name;
        this->id = id;
        this->grade = grade;
    }

    ~Student() {
        cout << "Destroying a Student object" << endl;
    }

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setId(string id) {
        this->id = id;
    }

    string getId() {
        return id;
    }

    void setGrade(string grade) {
        this->grade = grade;
    }

    string getGrade() {
        return grade;
    }
};

int main() {
    Student student1;  // create a Student object using the default constructor
    student1.setName("John Doe");
    student1.setId("12345");
    student1.setGrade("A");

    cout << "Name: " << student1.getName() << endl;
    cout << "ID: " << student1.getId() << endl;
    cout << "Grade: " << student1.getGrade() << endl;

    Student student2("Jane Smith", "67890", "B");  // create a Student object using the parameterized constructor

    cout << "Name: " << student2.getName() << endl;
    cout << "ID: " << student2.getId() << endl;
    cout << "Grade: " << student2.getGrade() << endl;

    return 0;
}

