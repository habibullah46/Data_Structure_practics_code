#include<iostream>
#include<stack>
using namespace std;
int main()
{
   //Habibullah........
   cout<<"\n\n\t\tADD STACK\n\n\n";
   stack<string> Class;
   Class.push("Areeba");
   Class.push("Afifa");
   Class.push("Javaria");
   Class.push("samaeen");
   cout<<"Stack: ";
   while(!Class.empty())
   {
   cout<<Class.top()<<" ,";
    Class.pop();
}
}

