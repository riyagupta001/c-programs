#include <iostream>
using namespace std;
void onlineInsertionSort(int* arr,int& size,int num)
{
 int i=size-1;
 while (i>=0 && arr[i]>num)
{
 arr[i+1]=arr[i];
 i--;
 }
 arr[i+1]=num;
 size++;
}
int main()
{
 int* arr=0,size=0,num;
 cout<<"Enter Numbers to be Sorted (enter -1 to stop):"<<endl;
 while(true)
 {
 cin>>num;
 if(num==-1)
 break;
 int* new_arr=new int[size+1];
 for(int i=0;i<size;i++)
 new_arr[i]=arr[i];
 delete[] arr;
 arr = new_arr;
 onlineInsertionSort(arr, size, num);
 cout<<"Sorted Array: ";
 for(int i=0;i<size;i++)
 cout<<arr[i]<<" ";
cout<<endl;
 }
 delete[] arr;
 return 0;
}

