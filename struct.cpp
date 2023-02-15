#include<iostream>
using namespace std;
struct Student
{
	int Id;
	string name;
	string Class;
	int RollNo;
	float GPA;
	
};
int main()
{
   //Habibullah........
   Student data;
   cout<<"Enter Your ID: ";
   cin>>data.Id;
   cout<<"Enter Your Name: ";
   cin>>data.name;
   cout<<"Enter Your Class: ";
   cin>>data.Class;
   cout<<"Enter Your RollNo: ";
   cin>>data.RollNo;
   cout<<"Enter Your GPA: ";
   cin>>data.GPA;
   cout<<"\n\n\n\t\t\tOUTPUT OF YOUR INPUT\n";
   cout<<"Id of student is: "<<data.Id;
   cout<<"\nName of the student is: "<<data.name;
   cout<<"\nClass of the student is: "<<data.Class;
   cout<<"\nRoll No of the student is: "<<data.RollNo;
   cout<<"\nGPA of the student is: "<<data.GPA;
   
}

