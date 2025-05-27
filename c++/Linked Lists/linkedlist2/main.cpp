#include <iostream>

using namespace std;

struct node{
   int data;
   node *link;
   };

int main()
{
   node*x;
   node*y;
   node*z;

   x = new node;
   x -> data = 10;

   y = x;
   z = x;

   x = new node;
   x -> data = 20;
   y -> link = x;
   y = y -> link;

   x = new node;
   x -> data = 30;
   y -> link = x;
   y = y-> link;

   x = new node;
   x -> data = 40;
   y -> link = x;
   y = y-> link;

   x = new node;
   x -> data = 50;
   y -> link = x;
   y = y-> link;

   x = new node;
   x -> data = 60;
   y -> link = x;

   x -> link = NULL;

   while(z != NULL){
    cout << z -> data <<" ";
    z = z -> link;
   }
    return 0;
}

