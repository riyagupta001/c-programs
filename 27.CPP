#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int* Rdm(int n) 
{
srand(time(0));
 int* randomArray=new int[n]; int i;
 for(i=0;i<n;i++)
 randomArray[i]=rand()%100;
 return randomArray;
}
int main() 
{
 int n,i;
 cout<<"Enter the Size of the Array:";
 cin>>n;
 int* randomNumbers=Rdm(n);
 cout<<"Random Numbers between 0 to 99:";
 for(i=0;i<n;i++)
 cout<<randomNumbers[i]<<" ";
 delete[] randomNumbers;
 return 0;
}

