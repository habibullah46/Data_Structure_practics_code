#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   int arr[100]={5,3,6,2,8,4,2};
   int pos,num, i;
   cout<<"Enter the position and number: ";
   cin>>pos>>num;
   for( i=4 ; i>=pos; i--)
   arr[i]= arr[i];
   arr[pos]=num;
   cout<<"Now Put array: ";
   for(i=0; i<7; i++)
   cout<<arr[i]<<" ";
   cout<<endl;
   
}

