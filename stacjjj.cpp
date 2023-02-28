#
include <iostream>
#include <stack>
#include <string>

using namespace std;

class NamesStack {
	private:
    stack<string> names;
public:
    void pushName(string name) {
        names.push(name);
    }
    
    void popNames() {
        while (!names.empty()) {
            cout << names.top() << endl;
            names.pop();
        }
    }
    
};

int main() {
    NamesStack stack;
    
    stack.pushName("2");
    stack.pushName("4");
    stack.pushName("6");
    stack.pushName("8");
    stack.pushName("10");
    stack.pushName("12");
    stack.pushName("14");
    stack.pushName("14");
    stack.pushName("16");
    stack.pushName("18");
    stack.pushName("20");
    
    stack.popNames();
    
    return 0;
}
