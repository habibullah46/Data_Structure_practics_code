#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   int a,b,c,d;
   cout<<"Enter Number: ";
   cin>>c;
   a=0;
   b=1; 
   d=0;
   do
   {
   	d=a+b;
   	cout<<d<<" ";
   	a=b;
   	b=d;
   	
   }
   while (d<=c);
}

