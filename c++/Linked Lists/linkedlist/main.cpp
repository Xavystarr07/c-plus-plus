#include <iostream>

using namespace std;

struct node{
   int data;
   node *link;
   };

int main()
{
   node*n;
   node*t;
   node*h;

   n = new node;
   n -> data = 1;

   t = n;
   h = n;

   n = new node;
   n -> data = 2;
   t -> link = n;
   t = t -> link;

   n = new node;
   n -> data = 3;
   t -> link = n;
   t = t-> link;

   n = new node;
   n -> data = 4;
   t -> link = n;
   t = t-> link;

   n = new node;
   n -> data = 5;
   t -> link = n;

   n -> link = NULL;

   while(h != NULL){
    cout << h -> data <<" ";
    h = h -> link;
   }
    return 0;
}
