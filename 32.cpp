

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
int n,size;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
cin>>arr[i];
}
cin>>n;
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int temp=-2;
while(start<=end){
if(arr[mid]==n){
temp=mid;
break;
}
else if(n<arr[mid]){
end=mid-1;
}
else{
start=mid+1;
}
mid=start+(end-start)/2;
}
if(temp<0){
cout<<"-1";
}
else{
cout<<temp;
}
return 0;
}