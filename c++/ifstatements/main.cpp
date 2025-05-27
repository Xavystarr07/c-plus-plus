#include <iostream>

using namespace std;

int main()
{
    int age =  16;                           // initialize if statement

    if (age < 13){
        cout << "You're not old enough\n";
    }
    else if(age < 19){
        cout << "You are almost 19\n";
    }
    else{
        cout << "False value\n";
    }
    return 0;
}
    cout << " How old are you?";
    int age;                           // user input if statement
    cin >> age;

    if (age < 13){
        cout << "You're not old enough\n";
    }
    else if(age < 19){
        cout << "You are almost 19\n";
    }
    else{
        cout << "False value\n";
    }
    return 0;
}
