#include<iostream>
//using namespace std;

void bubble_sort(int arr[])
{
	for(int i=0;i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(arr[i]<arr[j])
			{
				int temp = arr[i];
				arr[i]= arr[j];
				arr[j]=temp;
			}
		}
	}
}
int main()
{
   //Habibullah........
  int arr[5]={4,6,3,2,1};
 // int n = sizeof (arr)/sizeof (arr[0]);
  bubble_sort(arr);
  //output
  for(int i=0; i<5; i ++)
  {
  	std::cout<<arr[i]<<" ";
  }
}

