#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string major;
public:
    Student() {
        name = "";
        age = 0;
        major = "";
        cout << "Default Constructor Called" <<endl;
    }

    Student(string n, int a,string m) {
        name = n;
        age = a;
        major = m;
        cout << "Parameterized Constructor Called" <<endl;
    }

    ~Student() {
        cout << "Destructor Called for " << name <<endl;
    }

    // Getter functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    string getMajor() {
        return major;
    }

    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setMajor(string m) {
        major = m;
    }
};

int main() {
    Student s1; // calls default constructor
    s1.setName("Alice");
    s1.setAge(20);
    s1.setMajor("Computer Science");
    cout << "Name: " << s1.getName() << ", Age: " << s1.getAge() << ", Major: " << s1.getMajor()<<endl;
     Student s2("Bob", 22, "Mathematics"); // calls parameterized constructor
    std::cout << "Name: " << s2.getName() << ", Age: " << s2.getAge() << ", Major: " << s2.getMajor() << std::endl;

    Student s3("Charlie", 18, "Biology"); // calls parameterized constructor
    std::cout << "Name: " << s3.getName() << ", Age: " << s3.getAge() << ", Major: " << s3.getMajor() << std::endl;

    Student s4; // calls default constructor
    s4.setName("David");
    s4.setAge(19);
    s4.setMajor("History");
    std::cout << "Name: " << s4.getName() << ", Age: " << s4.getAge() << ", Major: " << s4.getMajor() << std::endl;

    Student s5("Eve", 21, "Psychology"); // calls parameterized constructor
    std::cout << "Name: " << s5.getName() << ", Age: " << s5.getAge() << ", Major: " << s5.getMajor() << std::endl;

    return 0;
}
