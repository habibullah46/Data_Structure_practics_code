#include <iostream>
using namespace std;
class Student 
{
public:
    string Student_Name;
    int  ID;
    string Grade;
};

int main() 
{
    Student student;
    student.Student_Name = " habib ";
    student.ID = 12345;
    student.Grade = "A";

    cout << "Name: " << student.Student_Name << endl;
    cout << "ID: " << student.ID << endl;
    cout << "Grade: " << student.Grade<< endl;

    return 0;
}
