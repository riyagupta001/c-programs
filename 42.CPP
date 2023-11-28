#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getRandomNumber()
{
 return rand()%100;
}
int* Rdm(int n)
{
 int* arr=new int[n];
 for(int i=0;i<n;i++)
 arr[i]=getRandomNumber();
 return arr;
}
void insertionSortAndDisplay(int arr[],int n)
{
 for (int i=1;i<n;i++)
{
 int key=arr[i];
 int j=i-1;
 while(j>=0 && arr[j]>key)
{
 arr[j+1]=arr[j];
 j--;
 }
 arr[j+1]=key;
 cout<<"Pass "<<i<<": ";
 for(int k=0;k<n;k++)
 cout<<arr[k]<<" ";
 cout << endl;
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
 for(int i=0;i< n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 insertionSortAndDisplay(arr,n);
 cout<<"Sorted Array: ";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 delete[] arr;
 return 0;
}

