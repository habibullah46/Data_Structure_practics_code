#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   int arr[5]= {3,5,2,1,6};
   int value;
   bool option = true;
   cout<<"Please Enter Your number:";
   cin>>value;
   for(int i=0; i<5; i++)
   {
   	if(value==arr[i])
   	{
   		cout<<"Location of your number is: "<<i;
   		option =false;
	   }
   }
   if(option == true)
   {
   	cout<<"\nSorry! Not Found Your number in array";
   }
}

