#include<iostream>
using namespace std;
 
struct Node
{
    int data;
    Node* link;
};
 
Node* top;
 
void push(int data)
{
     
    Node* temp = new Node();

    if (temp == NULL)
    {
        cout << "\nStack Overflow";
        exit(1);
    }
 
    temp->data = data;
 
    temp->link = top;

    top = temp;
}
void pop()
{
    Node* temp;
 
    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    { 
        temp = top;
 		top = top->link;
        cout<<"Poped item : "<<temp->data<<endl;
        free(temp);
    }
}
void display()
{
    Node* temp;
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        temp = top;
        while (temp != NULL)
        {
            cout << temp->data << "-> ";
            temp = temp->link;
        }
        cout<<"NULL"<<endl;
    }
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}