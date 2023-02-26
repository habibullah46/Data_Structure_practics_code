#include<iostream>
using namespace std;
class student
{
	int R_No;
	float GPA;
	public:
		 string name= "habibullah";
		 string classs= "BSCS(1st)";
	void R_NO(int R_No);        //setter 
	int R_NO();                            //getter...............
	void GpA(float GPA);                      //setter 
    int GpA();                              //Getter 
};
void student::R_NO(int R_No)
{
	this->R_No = R_No;	
	
}
int student::R_NO()
{
	return R_No;
	
}
void student::GpA( float GPA )
{
	this->GPA;
}
int student::GpA()
{
	return GPA;
}


int main()
{
   //Habibullah........
   student s;
   cout<<"Name of the student is: "<<s.name<<endl;
   cout<<"Class of Student is: "<<s.classs<<endl;
   s.R_NO(50);
   cout<<"Roll No of the student is :"<<s.R_NO()<<endl;
   s.GpA(3.4);
   cout<<"GPA of the Student: "<<s.GpA();
   
}

