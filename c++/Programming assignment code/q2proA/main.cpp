#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   const double baseCharge = 10.0; // base charge per customer
   const double itemCharge = 2.0; // item charge per unit
   const double discountRate = 0.1; // discount rate for purchases over R100

   int numCtrs;
   cout << "Enter the number of customers: ";
   cin >> numCtrs;  // allows user to enter how many customers will be needed to work out the charge amounts.

   for (int x = 1; x <= numCtrs; x++) {
       int itemsPurchased;
       double totalPurchase, Charge;

       cout << "\nCustomer #" << x << endl;
       cout << "Enter the number of items purchased: ";
       cin >> itemsPurchased;
       cout << "Enter the total purchase amount: R";
       cin >> totalPurchase;

       Charge = baseCharge + itemsPurchased * itemCharge; // formula to get the charge amount per customer
       if (totalPurchase > 100) {
           Charge *= (1 - discountRate);
       }

       cout << fixed << setprecision(2) << "Customer #" << x << " Charge: R" << Charge << endl; // displays the calculated charge for the current customer
   }

   return 0;
}


