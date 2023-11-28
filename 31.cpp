#include<iostream>
using namespace std;
void print_triplet(int **arr,int rows,int cols){
int flag=0;
cout<<"The triplet form is :"<<endl;
cout<<"i j element"<<endl;
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
if(arr[i][j]!=0){
flag++;
cout<<i<<'\t'<<j<<'\t'<<arr[i][j]<<endl;
} }}
cout<<endl;
cout<<"No. of bytes saved are : "<<4*(rows*cols)-(4*(flag+1))<<" bytes"<<endl;
}
bool check_sparse(int **arr,int rows,int cols){
int count=0;
for(int i=0;i<rows;i++){
for(int j=0;j<cols;j++){
if(arr[i][j]==0){
count++;
}
}
}
if(count>=((rows*cols)/2))
return true;
else
return false;
}
int main(){
int r,c;
cout<<"Enter the rows and cols respectively : ";
cin>>r>>c;
int**a=new int *[r];
for(int i=0;i<r;i++)
a[i]=new int[c];
cout<<"Enter the elements of matrix : "<<endl;
for(int i=0;i<r;i++)
for(int j=0;j<r;j++)
cin>>a[i][j];
if(check_sparse(a,r,c)){
print_triplet(a,r,c);
}
else{
cout<<"Not a sparse matrix!";
}
for(int i=0;i<r;i++){
delete[] a[i];
}
delete[] a;
return 0;
}