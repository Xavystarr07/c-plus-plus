#include <iostream>

using namespace std;

int main()
{
   int i = 0;
   while(int i < 10){
        cout << " less than 10 hehe"
    i++;
   }
    return 0;
}

int main()
{

   for(int i=0; i<10; i++){
        cout << " less than 10 hehe"
   }
    return 0;
}

int main()
{
   string password = "hello123";
   string guess;
   do
   {
      cout << "Guess the password: "
      cin >>  guess;
   }
   while(guess != password);

    return 0;
}
