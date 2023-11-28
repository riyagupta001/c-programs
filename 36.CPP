#include <iostream>
using namespace std;
int insertionSort(char arr[],int n)
{
 int shifts = 0;
 for(int i=1;i<n;i++)
{
 char key=arr[i];
 int j=i-1;
 while (j>=0 && arr[j]>key)
{
 arr[j+1]=arr[j];
 j--;
 shifts++;
 }
 arr[j+1]=key;
 }
 return shifts;
}
int main()
{
 int n;
 cout<<"Enter the number of characters: ";
 cin>>n;
 if (n<=0)
 {
 cout<<"Invalid input size."<< endl;
 return 1;
 }
 char arr[n];
 cout<<"Enter " <<n<<" characters: ";
 for(int i=0;i<n;i++)
 cin>>arr[i];
 int shifts=insertionSort(arr,n);
 cout << "Sorted array in Alphabetic Order: ";
 for(int i=0;i<n;i++)
 cout<<arr[i]<<" ";
 cout<<endl<<"Number of shifts: "<<shifts<<endl;
 return 0;
}
