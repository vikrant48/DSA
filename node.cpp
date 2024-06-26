#include <iostream>
using namespace std;

class Node
{
public:
   int data;
   Node *next;

   Node(int data)
   {
      this->data = data;
      this->next = NULL;
   }
};

void insertattail(Node *&tail, int d)
{
   Node *temp = new Node(d);
   tail->next = temp;
   temp = tail;
}

void insertathead(Node *&head, int d)
{
   // new node creation
   Node *temp = new Node(d);
   temp->next = head;
   head = temp;
}

void print(Node *&head)
{
   // for no change in head make a new temp
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

int main()
{
   Node *obj1 = new Node(20);
   cout << obj1->data << endl;
   cout << obj1->next << endl;

   Node *tail = obj1;
   print(tail);

   insertattail(tail, 30);
   print(tail);

   return 0;
}