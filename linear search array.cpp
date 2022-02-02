#include<iostream>
using namespace std;
int lsearch(int[],int,int);
int main()
{
  int ar[50],item,index,N;
  cout<<"enter the size of the array:";
  cin>>N;
  cout<<"enter the elements of the array:\n";
  for(int i=0;i<N;i++)
  {
    cin>>ar[i];
  }
  cout<<"enter the element to be searched for:\n";
  cin>>item;
  index=lsearch(ar,N,item);
  if(index==-1)
  cout<<"\n sorry given element could not found";
  else cout<<"element found at index:"<<index<<",position:"<<index+1;
  return 0;
}
int lsearch(int ar[],int size,int it)
{
  for(int i=0;i<size;i++)
  {
    if(ar[i]==it)
    return i;
  }
  return -1;
  
}