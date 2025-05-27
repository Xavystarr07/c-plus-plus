#include <iostream>
using namespace std;

class MyClass {
public:
    // Default Constructor
    MyClass() {
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    MyClass(int value) {
        this->value = value;
        cout << "Parameterized Constructor called with value: " << value << endl;
    }

    // Copy Constructor
    MyClass(const MyClass& other) {
        this->value = other.value;
        cout << "Copy Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called for value: " << value << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

private:
    int value;
};

int main() {
    // Default Constructor
    MyClass obj1;

    // Parameterized Constructor
    MyClass obj2(42);

    // Copy Constructor
    MyClass obj3 = obj2;

    // Destructor (Automatically called when objects go out of scope)

    // Display values
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
