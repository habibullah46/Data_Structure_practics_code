#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   int RollNo[5]={34,54,23,87,55};
   string Name[5]={"habib","hammad","ayisha","fatima","shoukat"};
   string Class[5]={ "BSCS 1st","BSCS 2nd ", "BSCS 3rd", "BSCS 4th","BSCS 5th" };

  for(int i=0; i<5; i++)
  {
  	cout<<"\nName of the Student is: "<<Name[i]<<"\nRollNo of the student is: "<<RollNo[i]<<"\nClass of the student is: "<<Class[i];
  	cout<<"\n==================================================="<<endl;
  }
   
}

