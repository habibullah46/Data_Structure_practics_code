#include<iostream>
using namespace std;
class Testing
{
	int a, b;
	public:
		void setvalue(int a ,int b);//setter
		int getvalue(); // getter
		
};
void Testing.setvalue(int a , int b)
  this->a=a; 
  this ->b=b;
  }
  int Testing::getvalue()
  {
  	return a+b;
  }
int main()
{
   //Habibullah........
   Testing obj;
   obj.setvalue(5,6);
   cout<<obj.getvalue();
   return 0;
}

