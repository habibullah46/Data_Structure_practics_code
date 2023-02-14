#include<iostream>
using namespace std;
int main()
{
   //Habibullah........
   string Class[5] = {"habib","Azkar", "hammad", "shoukat","amna"};
   bool Pakistan = true;
   string name;
   cout<<"please enter Student name: ";
   cin>>name;
   for(int i=0; i<5; i++)
   {
   	 if(name==Class[i])
   	 {
   	 	cout<<"Location of "<<name<<" is "<<i;
   	 	Pakistan = false;
   	 	
		}
   }
   if(Pakistan == true)
   {
   	cout<<"sorry Not found";
   }
}

