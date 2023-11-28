#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int randomNum()
{
 return rand()%100;
}
void swap(int* a,int* b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}
int partition(int arr[],int low,int high)
{
 int pivot=arr[high];
 int i=(low - 1);
 for(int j=low;j<=high-1;j++)
 {
 if (arr[j]<pivot)
 {
 i++;
 swap(&arr[i],&arr[j]);
 }
 }
 swap(&arr[i + 1],&arr[high]);
 return(i+1);
}
void quickSort(int arr[],int low,int high)
{
 if (low<high)
 {
 int pi=partition(arr,low,high);
 cout<<"Pass: ";
 for(int i=low;i<=high;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 quickSort(arr,low,pi-1);
 quickSort(arr,pi+1,high);
 }
}
int* Rdm(int n)
{
 int* arr=new int[n];
 srand(time(0));
for (int i=0;i<n;i++)
 arr[i] = randomNum();
 return arr;
}
int main()
{
 int n;
 cout<<"Enter the Size of the Array: ";
 cin>>n;
 int* arr=Rdm(n);
 cout<<"Initial Array: ";
 for (int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 quickSort(arr,0,n-1);
 cout<<"Sorted Array: ";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
 delete[] arr;
 return 0;
}

