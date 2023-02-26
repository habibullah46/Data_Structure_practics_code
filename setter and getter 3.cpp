#include<iostream>
using namespace std;
class student
{
	int R_No;
	float GPA;
	public:
		 string name= "habibullah";
		 string classs= "BSCS(1st)";
	void R_and_G(int R_No, float GPA);        //setter 
	int R_and_G();                            //getter...............
};
void student::R_and_G(int R_No, float GPA)
{
	this->R_No = R_No;
	this->GPA = GPA;
	
}
int student::R_and_G()
{
	return R_No,GPA;
}

int main()
{
   //Habibullah........
   student s;
   cout<<"Name of the student is: "<<s.name<<endl;
   cout<<"Class of Student is: "<<s.classs<<endl;
   s.R_and_G(50, 3.4);
   cout<<s.R_and_G();
   
}

