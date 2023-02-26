#include<iostream>
using namespace std;

class Student
{
    private    float RollNo, GPA;
  
    public:
    	string name; 
    	string classs;
      //Setter 
//    void SetRollno(int R) 
//    {
//    	
//        		RollNo=R;
//	}
//	void SetGPA(int G)
//	{
//		
//		GPA= G;
//	}
	//Getter
	int GetRollno()
	{
		cin>>RollNo;
		return RollNo;
	}
	int GetGPA()
	{   cin>>GPA;
		return GPA;
	}
};
int main()
{
	Student S;
	cout<<"\n\n\t\tStudent Class\n\n";
	cout<<"Enter student name: ";
//	cin>>S.name;
	getline(cin,S.name);
	cout<<"Enter Student Rollno: ";
//	S.GetRollno();
	int rollno=S.GetRollno();
	cout<<"Class of the Student is: ";
	cin>>S.classs;
	cout<<"Enter Student GPA: ";
//	S.GetGPA();
	float Gpa=S.GetGPA();
	
	cout<<"\n\n\n ***************OUTPUT************"<<endl;
	cout<<"Name of the student is: "<<S.name<<endl;
	cout<<"RollNo of the student is: "<<rollno<<endl;
	cout<<"Class of the student is: "<<S.classs<<endl;
	cout<<"GPA of the student is: "<<Gpa<<endl;
	
	
}

