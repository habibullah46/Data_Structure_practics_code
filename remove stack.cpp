#include <iostream>
#include <stack>
using namespace std;
void display_stack(stack<string> Class)
 {

  while(!Class.empty()) {
    cout << Class.top() << ", ";
    Class.pop();
  }

  cout << endl;
}


int main() {

  stack<string> Student;

  Student.push("areeba");
  Student.push("Afifa");
  Student.push("samaeen");
  
  cout << "Initial Stack: ";
  display_stack(Student);
  
  // removes "Blue" as it was inserted last
  
  Student.pop();
  
  cout << "Final Stack: ";

  // print elements of stack
  display_stack(Student);
  
  return 0;
}

