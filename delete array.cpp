#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   int a[5] = {10,20, 30, 40, 50};
   int postion;
   cout<<"Plase enter your postion: ";
   cin>>postion;
   for(int i=postion; i<5; i++)
   {
   	a[i]=a[i+1];
   }
   //for output
   for(int i=0; i<5; i++)
   {
   	
   	cout<<a[i]<<" ";
   }
   
}

