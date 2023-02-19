#include<iostream>
using namespace std;
struct student
{
	int Id;
	string name;
	string Class;
	float GPA;
};

int main()
{
	student aqell;
	
	
	cout<<"\n\n\n\t\t\tStudent Details\n";
	cout<<"Enter student Id: ";
	cin>>aqell.Id;
	cout<<"Enter Student name: ";
	cin>>aqell.name;
	cout<<"Enter Student class: ";
	cin>>aqell.Class;
	cout<<"Enter student gpa: ";
	cin>>aqell.GPA;
	
	cout<<"\n\n\t\t\toutput of input\n";
	cout<<"ID of the student is :"<<aqell.Id<<endl;
	cout<<"Name of the student is : "<<aqell.name<<endl;
	cout<<"class of the student is : "<<aqell.Class<<endl;
	cout<<"GPA of the student is :"<<aqell.GPA<<endl;
	
	
	
	   
}
   
   
   
   
   
   
   
   
   
   

