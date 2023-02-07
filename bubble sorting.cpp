#include<iostream>
using namespace std;
int main()
{
	int temp;
     char  arr[5]={'a','c','b','n','m'};
	for(int i=0;i<5; i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j]=temp;
		}
		}
	}
	
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}
