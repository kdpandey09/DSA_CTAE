/*program to delete a node from linked list of given location.(Kaustub Dutt Pandey)*/

#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data = val;
			next = NULL;
		}
};

void insert(node* &head,int val) {
	node* n= new node(val);
	if(head==NULL) {
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next !=NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

void delete_head(node* &head){
	node* todelete = head;
	head = head->next;
	delete todelete;
	
}

void deletion(node* &head,int val) {
	if(head==NULL) {
		return;
	}
	if(head->next==NULL) {
		delete_head(head);
	}
	node* temp = head;
	while(temp->next->data != val) {
		temp = temp->next;
	}
	node* todelete = temp->next;
	temp->next = temp->next->next;
	delete todelete;
}


void display(node* head) {
	node* temp = head;
	while(temp != NULL) {
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main() {
	node* head=NULL;
	
	int a,ele;
	insert(head,19);
	insert(head,12);
	insert(head,63);
	insert(head,69);
	insert(head,88);
	insert(head,29);
	display(head);
	do {
		cout<<"\n1. Search and Delete\n2. Display\n3. Exit";
		cout<<"\nEnter your choice : ";
		cin>>a;
		switch(a) {
			case 1:
				cout<<"\nEnter a element to be deleted : ";
				cin>>ele;
				deletion(head,ele);
				break;
			case 2:
				display(head);
				break;
			case 3:
				break;
			default :
				cout<<"Wrong Choice. Try again ";
		}
	} while(a!=3);

	return 0;
}