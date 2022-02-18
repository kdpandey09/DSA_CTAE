/* A program to insert a new node in linked list after given node. (Kaustub Dutt Pandey)*/
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
void insert(node* &head,int val){
	node* n= new node(val);
	if(head==NULL){
		head=n;
		return;
	}
	node* temp = head;
	while(temp->next !=NULL){
		temp = temp->next;
	}
	temp->next = n;
}
void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
void search_insert(node* head,int key){
	node* temp = head;
	while(temp != NULL){
		if(temp->data == key){
			break;
		}
		temp = temp->next;
	}
	if (temp->data == key){
		int value;
		cout<<"location found enter data item=";
		cin>>value;
		node* new_node = new node(value);
		new_node->data = value;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else {
		cout<<"location not found"<<endl;
	}
}
int main()
{
	int a,ele;
	node* head=NULL;
	insert(head,21);
	insert(head,37);
	insert(head,42);
	insert(head,69);
	insert(head,23);
	insert(head,88);
	display(head);
do{
cout<<"\n1.Enter 1 to Search and Insert\n2.Enter 2 to Display\n3.Enter 3 to Exit";
cout<<"\nEnter your choice : ";
cin>>a;
switch(a)
{
	case 1: 
		cout<<"\nEnter a element to be Searched : ";
		cin>>ele;
		search_insert(head,ele);
		break;
	case 2: 
		display(head);
		break;
	case 3: 
		break;
	default : 
		cout<<"Wrong Choice !!! ";
}
}while(a!=3);
return 0;
}










