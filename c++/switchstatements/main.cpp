#include <iostream>

using namespace std;

int main()
{
    cout << "What difficulty?\n" << "0: easy\n" << "1:medium\n" << "2:hard\n";
    int difficulty;
    cin >> difficulty;


    switch(difficulty){
    case 0:
    cout << " You chose easy";
    break;

    case 1:
    cout << " You chose medium";
    break;

    case 2:
    cout << " You chose hard";
    break;

    default:
    cout << " Really now?";
    break;

    return 0;
    }
}
