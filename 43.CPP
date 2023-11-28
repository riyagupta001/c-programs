#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int* Rdm(int n)
{
 int* arr=new int[n];
 for(int i=0; i < n; i++)
 arr[i]=rand()%100;
 return arr;
}
void selectionSort(int arr[],int n)
{
 for(int i=0;i<n-1;i++)
{
 int minIndex = i;
 for(int j=i+1;j<n;j++)
{
 if(arr[j]<arr[minIndex])
 minIndex=j;
 }
 int temp=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=temp;
 cout<<"Pass "<<i+1<<": ";
 for(int k=0;k<n;k++)
 cout<<arr[k]<<" ";
 cout<<endl;
 }
}
int main()
{
 srand(time(0));
int n;
 cout<<"Enter the Size of the Array: ";
 cin>>n;
 int* arr=Rdm(n);
 cout<<"Original Array: ";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 selectionSort(arr,n);
 cout<<"Sorted Array: ";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 delete[] arr;
 return 0;
}
