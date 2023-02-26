#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		int id;
		int RollNo;
		string Department;
		
		Student() //constructor 
		{
			cout<<"\n\n\t\t\tStudent Class\n\n";
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter Your ID: ";
			cin>>id;
			cout<<"Enter Your RollNO: ";
			cin>>RollNo;
			cout<<"Enter Your Department: ";
			cin>>Department;
			
		}
		void output()
		{
			cout<<"\n\n\t\t\t\tOUTPUT\n\n\n";
			cout<<"Name Of the student is: "<<name<<endl;
			cout<<"ID of the Student is: "<<id<<endl;
			cout<<"RollNo of the Student is: "<<RollNo<<endl;
			cout<<"Department of the student is: "<<Department<<endl;
		}
		~Student()//destructor
		{
			cout<<"\n\n\t\t\tThank you!!"<<endl;
		}
};
int main()
{
   //Habibullah........
   
   Student s;
   s.output();
}

