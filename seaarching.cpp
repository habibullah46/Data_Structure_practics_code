#include<iostream>
using namespace std;
int main()
{
	int arr[] = {1,9,8,7,6,2,4,5,11,34,67,76};
	int num,index;
	bool flag = false;
	cout<<endl<<"Enter number to search: ";
	cin>>num;
	for(int i = 0;i<12;i++)
	{
		if(arr[i] == num)
		{
			flag = true;
			index = i;
			break;
		}
	}
	if(flag == true)
	{
		cout<<endl<<num<<" is found at index "<<index;
	}
	else
	{
		cout<<endl<<"Number not found!!!!";
	}
	return 0;
}
