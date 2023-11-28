#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int generateRandomNumber()
{
 return rand()%100;
}
int* Rdm(int n)
{
 int* arr=new int[n];
 for(int i=0;i<n;i++)
 arr[i]=generateRandomNumber();
 return arr;
}
void bubbleSort(int arr[],int n)
{
 bool swapped;
 for(int i=0;i<n-1;i++)
{
 swapped=false;
 for(int j=0;j<n-i-1;j++)
{
 if(arr[j]>arr[j+1])
{
 int temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
 swapped=true;
 }
 }
 cout<<"Pass "<<i+1<<":";
 for(int k=0;k<n;k++)
 cout<<arr[k]<<" ";
 cout<<endl;
 if (!swapped)
 break;
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
 bubbleSort(arr,n);
 cout<<"Sorted Array: ";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 delete[] arr;
 return 0;
}
