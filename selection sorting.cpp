//program to illustrate selection sorting in an array(Kaustub Dutt Pandey)
#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}
void sort(int arr[],int size)
{
	int n = size;
	int start;
	for(int i =0;i<n-1;i++)
	{
		start = i;
		for(int j= i+1;j<n;j++)
		{
			if(arr[j]<arr[start])
			{
				swap(&arr[j],&arr[start]);
			}
		}
	}
}
void display(int arr[],int size)
{
	for(int i= 0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main() 
{ 
 int ar[50],n;
  cout<<"enter the size of the array:";
  cin>>n;
  cout<<"enter the elements of the array:\n";
  for(int i=0;i<n;i++)
  {
    cin>>ar[i];
  }
    sort(ar, n); 
    cout << "The array after selection sorting : \n"; 
    display(ar, n); 
    return 0; 
}