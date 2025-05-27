#include <iostream>

using namespace std;

int main()
{
    double Sales = 95000;
    cout << "Sales: $" << Sales << endl;

    const double stateTaxRate = .04;
    double stateTax = Sales * stateTaxRate;
    cout << "State Tax:" << stateTax << endl;

    const double countyTaxRate= .02;
    double countyTax = Sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << " Total Tax: $" << totalTax;

    return 0;
}
