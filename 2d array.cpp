#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   int Row = 4; 
   int Col = 3;
   int matrix[Row][Col];
   for(int i=0; i<4; i++)
   {
   	for(int j=0;j<3; j++)
   	{
   		cout<<"Enter Row & Enter Colom ";
   		cin>>matrix[i][j];
	   }
   }
   for(int i=0; i<4; i++)
   {
   	for(int j=0;j>3; j++)
   	{
   	
   		cout<<"mat["<<i<<"]["<<j<<"]="<<matrix[i][j]<<"\t"
	   }
	   cout<<endl;
   }
   
}

