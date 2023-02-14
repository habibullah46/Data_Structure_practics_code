#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   string student[5] = {"Habibullah", "Danish","shoukat","Azkar","Ayisha"};
   int position;
   cout<<"Please enter your positon: ";
   cin>>position;
   for(int i = position; i<4;i++)
   {
   	   student[i]=student[i+1];
   }
   for(int i=0 ;i <4; i++)
   {
   	cout<<student[i]<<" ";
   }
}

