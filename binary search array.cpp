
// C++ program to implement recursive Binary Search
#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
 
int main()
{
    int ar[50],item,index,N,x;
  cout<<"enter the size of the array:";
  cin>>N;
  cout<<"enter the elements of the array:\n";
  for(int i=0;i<N;i++)
  {
    cin>>ar[i];
  }
  cout<<"enter the element to be searched for:\n";
  cin>>x;
    int result = binarySearch(ar, 0, N - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}