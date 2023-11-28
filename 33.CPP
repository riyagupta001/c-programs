#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int random_number()
{
 return rand()%100;
}
void print_array(int arr[],int size)
{
 for (int i=0;i<size;i++)
 cout<<arr[i]<<" ";
 cout<<endl;
}
void merge(int arr[],int left[],int left_size,int right[],int right_size)
{
 int i=0,j=0,k=0;
 while(i<left_size && j<right_size)
{
 if (left[i]<=right[j])
 arr[k++]=left[i++];
 else
 arr[k++]=right[j++];
 }
 while(i<left_size)
 arr[k++]=left[i++];
 while(j<right_size)
 arr[k++]=right[j++];
}
void merge_sort(int arr[],int size)
{
 if(size<=1)
 return;
 int mid=size/2;
 int left[mid];
 int right[size-mid];
 for(int i=0;i<mid;i++)
 left[i]=arr[i];
 for(int i=mid;i<size;i++)
 right[i-mid]=arr[i];
 merge_sort(left,mid);
 merge_sort(right,size-mid);
 merge(arr,left,mid,right,size-mid);
 print_array(arr,size);
}
int main()
{
 int n;
 cout<<"Enter the Size of the Array: ";
 cin>>n;
 srand(time(0));
 int* arr=new int[n];
 for(int i=0;i<n;i++)
 arr[i]=random_number();
 cout<<"Original Array: ";
 print_array(arr,n);
 cout<<"Merge Sort Passes:"<<endl;
 merge_sort(arr,n);
 cout<<"Sorted Array: ";
 print_array(arr,n);
 delete[] arr;
 return 0;
}
