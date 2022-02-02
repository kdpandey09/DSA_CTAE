#include<iostream>
using namespace std;
int main()
{

int n,b,d=0 ;
cout<<"enter size of array"<<endl;
cin>>n;
int a[100];
cout<<"enter elements of array"<<endl;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
do{
	cout<<"enter your choice"<<endl<<endl<<"choose 1 for insertion"<<endl<<"choose 2 for deletion"<<endl<<"choose 3 to exit"<<endl;
	cin>>b;
	switch(b)
	{
		case 1:
			int c;
			cout<<"enter the new number to be inserted"<<endl;
			cin>>c;
			a[n] = c;
			n++;
			cout<<"array after insertion"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<a[i];
			}
			cout<<endl;
			break;
		case (2):
			cout<<"enter the number to be deleted"<<endl;
			cin>>c;
			for(int i=0;i<n;i++)
			{
				for(int i=0;i<n;i++)
				{
					if(c==a[i])
					{
						for(int j=i;j<n;j++){
							
						a[j]=a[j+1];
						}
						n--;
						cout<<"array after deletion"<<endl;
						for(int i=0;i<n;i++)
						{
						cout<<a[i];
						}
						cout<<endl;
						break;
					}
					else if(i==n)
					{
						cout<<"element not found";
					}
				}	
			}	
			n--;
			break;
		case 3 : break;
		default: cout<<"invalid choice"<<endl;
			
			
	}
	
}while(b!=3);
return 0;
}