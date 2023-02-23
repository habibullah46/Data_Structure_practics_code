#include <iostream>
using namespace std;
class student 
{
	int RollNo;
	string Name;
	float GPA;

public:
	student()
	{
		cout << "Enter the RollNo:";
		cin >> RollNo;
		cout << "Enter the Name:";
		cin >> Name;
		cout << "Enter the GPA:";
		cin >> GPA;
	}

	void display()
	{
		cout<<"\n\n";
		cout <<"RollNo"<<"\t\t "<<"Name"<<"\t\t"<<"GPA"<<endl;
		cout <<"\n"<<RollNo<< "  \t " << Name << "\t\t" << GPA;
	}
};

int main()
{
	student s; 
			
	s.display();

	return 0;
}

