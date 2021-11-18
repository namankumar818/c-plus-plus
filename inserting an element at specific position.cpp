#include<iostream>
using namespace std;
int main(){
int n, pos, x;
cin>>n;
int a[n];
for(int i = 0; i<n; i++){
cin>>a[i];
}cout<<"enter the position where you want to insert";
cin>>pos;
cout<<"enter the value";
cin>>x;
n++;
for(int i = n; i>=pos; i--){
a[i] = a[i-1];
a[i-1] = x;
}
for(int i = 0; i<n; i++){

cout<<a[i]<<" ";
 
}

return 0;
}