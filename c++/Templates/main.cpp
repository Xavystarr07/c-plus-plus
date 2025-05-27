#include <iostream>

using namespace std;

template <class T>
class Calculation{
private:
    T num1;
    T num2;
public:
    Calculation(T n1,T n2){
    num1 =  n1;
    num2 = n2;
    }
T addition(){
return num1 + num2;}

T subtraction(){
return num1 - num2;}

T multiplication(){
return num1 * num2;}

T division(){
return num1 / num2;}

/*T functions(T x, T y){

if (x >= y){

    return x;}

else{
    return y;
}
*/
};
int main()
{
    /*
    cout << functions(6,9) << endl;
    cout << functions(17.8,9.4) << endl;
    cout << functions('A','G');
*/
    Calculation<int> calc(10,20);
    cout << calc.addition() << endl;
    Calculation<float> calc1(10.7,20.9);
    cout << calc.addition() << endl;
    return 0;
}
