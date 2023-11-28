#include <iostream>
using namespace std;
void insertInSortedArray(int arr[],int &size,int element)
{
 int i=size-1;
 while(i>=0 && arr[i]>element)
{
 arr[i+1]=arr[i];
 i--;
 }
 arr[i+1]=element;
 size++;
}
int main() 
{
 int size;
 cout<<"Enter the Size of the Array: ";
 cin>>size;
 int arr[size];
 cout<<"Enter the Sorted Elements: ";
 for (int i=0;i<size;i++)
 cin>>arr[i];
 int element;
 cout<<"Enter the Element to Insert: ";
 cin>>element;
 insertInSortedArray(arr,size,element);
 cout<<"Sorted Array after Insertion:" <<endl;
 for (int i=0;i<size;i++)
 cout<<arr[i]<<" ";
 return 0;
}

