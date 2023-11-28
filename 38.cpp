#include<iostream>
using namespace std;
int main(){
int size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
int pos=0;
for(int i=0;i<size;i++){
if(arr[i+1]<arr[i]){
pos=i;
break;
}
}
cout<<pos+1;
return 0;
}