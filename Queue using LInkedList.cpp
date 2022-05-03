#include<iostream>
using namespace std;

struct QNode {
	int data;
	QNode* next;
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue {
	QNode *front, *rear;
	Queue()
	{
		front = rear = NULL;
	}

	void enQueue(int x)
	{

		// Create a new LL node
		QNode* temp = new QNode(x);

		/* If queue is empty, then new node is front and rear both*/
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		/*Add the new node at the end of queue and change rear*/
		rear->next = temp;
		rear = temp;
	}

	// Function to Delete
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
	void display(){
		QNode* temp = front;
		while(temp != NULL){
			cout<<temp->data<<" -> ";
			temp = temp->next;
		}
		cout<<"NULL"<<endl;
		
	}
};

int main() {
   int ch, val;
   Queue q;
   cout<<"1) Insert in Queue"<<endl;
   cout<<"2) Delete From Queue"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be Inserted:"<<endl;
            cin>>val;
            q.enQueue(val);
            break;
         }
         case 2: {
            q.deQueue();
            break;
         }
         case 3: {
         	cout<<"The Queue is : "<<endl;
            q.display();
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
