#include <iostream>
#include <string>

using namespace std;

class Temp {
protected:
   double tempValue;

public:
   Temp(double value) : tempValue(value) {}

   virtual void convert() = 0;
};

class Fahrenheit : public Temp {
public:
   Fahrenheit(double value) : Temp(value) {}

   void convert() override {
       double celsius = (tempValue - 32) * 5.0 / 9.0;
       double kelvin = celsius + 273.15;
       cout << tempValue << "F is " << celsius << "C or " << kelvin << "K\n";
   }
};


class Celsius : public Temp {
public:
   Celsius(double value) : Temp(value) {}

   void convert() override {
       double fahrenheit = tempValue * 9.0 / 5.0 + 32;
       double kelvin = tempValue + 273.15;
       cout << tempValue << "C is " << fahrenheit << "F or " << kelvin << "K\n";
   }
};


class Kelvin : public Temp {
public:
   Kelvin(double value) : Temp(value) {}

   void convert() override {
       double celsius = tempValue - 273.15;
       double fahrenheit = celsius * 9.0 / 5.0 + 32;
       cout << tempValue << "K is " << celsius << "C or " << fahrenheit << "F\n";
   }
};


int main() {
   string userChoice;
   double value;

   do {
       cout << "Enter the temperature value: ";
       cin >> value;

       cout << "Choose the temperature unit:\n";
       cout << "1. Fahrenheit\n";
       cout << "2. Celsius\n";
       cout << "3. Kelvin\n";
       cin >> userChoice;

       Temp* newTemp;
       switch (stoi(userChoice)) {
           case 1:
               newTemp = new Fahrenheit(value);
               break;
           case 2:
               newTemp = new Celsius(value);
               break;
           case 3:
               newTemp = new Kelvin(value);
               break;
           default:
               cout << "Invalid choice, try again!\n";
               continue;
       }

       newTemp -> convert();
       delete newTemp;

       cout << "Would you like to convert another temperature? (yes/no) ";
       cin >> userChoice;
   } while (userChoice == "yes");

   return 0;
}
