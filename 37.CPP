#include <iostream>
using namespace std;
int findMostFrequentElement(int arr[], int size) 
{
 int mostFrequent=arr[0];
 int maxCount=1,i,j;
 for(i=0;i<size; i++)
{
 int currentElement=arr[i];
 int currentCount=1;
 for(j=i+1;j<size;j++)
{
 if(arr[j]==currentElement)
 currentCount++;
 }
 if(currentCount>maxCount)
{
 mostFrequent=currentElement;
 maxCount=currentCount;
 }
 }
 return mostFrequent;
}
int main() 
{
 int n,i;
 cout<<"Enter the Size of the Array :";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements of the array :";
 for(i=0;i<n;i++)
 cin>>arr[i];
int mostFrequentElement=findMostFrequentElement(arr,n);
 cout<<"Most frequent element: "<<mostFrequentElement<<endl;
 return 0;
}
