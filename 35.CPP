#include <iostream>
using namespace std;
void stableSelectionSort(int arr[],int n)
{
 for (int i=0;i<n-1;i++)
{
 int minIndex=i;
 for(int j=i+1;j<n;j++)
{
 if (arr[j]<arr[minIndex])
 minIndex=j;
 }
 int minValue=arr[minIndex];
 while(minIndex>i)
{
 arr[minIndex]=arr[minIndex-1];
 minIndex--;
 }
 arr[i] = minValue;
 }
}
void printArray(int arr[],int n)
{
 for (int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
}
int main()
{
 int n;
 cout<<"Enter the Size of the Array :";
 cin>>n;
 int arr[n];
 cout<<"Enter the Elements in the Array :";
 for(int i=0;i<n;i++)
 cin>>arr[i];
 cout<<"Original Array: ";
 printArray(arr,n);
 stableSelectionSort(arr,n);
 cout<<"Sorted array: ";
 printArray(arr,n);
 return 0;
}

