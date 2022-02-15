/* PROGRAM TO EXECUTE INSERTION IN LINKED LIST AT THE BEGINNING AND END (Kaustub Dutt Pandey)*/
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
void insertAtTail(node* &head,int val){
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
void insertAthead(node* &head, int val){
	node* n = new node(val);
	n->next = head;
	head = n;
}
void display(node* head){
	node* temp = head;
	while(temp != NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}
int main()
{
	node* head=NULL;
	int data,n,x;
	do{
		cout<<"ENTER 1 TO INSERT AT BEGINNING"<<endl<<"ENTER 2 TO INSERT AT END"<<endl<<"ENTER 3 TO DISPLAY LINKED LIST"<<endl<<"ENTER 4 TO EXIT"<<endl;
		cin>>x;
		switch(x)
		{
			case(1):
				cout<<"ENTER NUMBER OF VALUES TO BE INSERTED AT THE BEGINNING"<<endl;
				cin>>n;
				cout<<"ENTER THE VALUES TO BE INSERTED AT THE BEGINNING"<<endl;
				for(int i=0;i<n;i++){
					cin>>data;
					insertAthead(head,data);
				}
				break;
		
			case(2):
				cout<<"ENTER NUMBER OF VALUES TO BE INSERTED AT THE END"<<endl;
				cin>>n;
				cout<<"ENTER THE VALUES TO BE INSERTED AT THE END"<<endl;
				for(int i=0;i<n;i++){
					cin>>data;
					insertAtTail(head,data);
				}
				break;
			case(3):
				cout<<"THE LINKED LIST IS :- "<<endl;
				display(head);
				break;
			case (4) : break;
			default: cout<<"invalid choice"<<endl;
		}
	}while(x != 4);
	return 0;
}