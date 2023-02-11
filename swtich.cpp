#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   	int temp;
int a=2;
int b=3;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;

cout<<"After swape"<<endl;
for(int i=0; i<2; i++)
{
	 temp = a;
	a=b;
	b=temp;
	
}
cout<<temp;
}
