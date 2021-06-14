//searching elements in array
#include<iostream>
using namespace std;
int find(int a[], int n, int key){
    for(int i=0; i<n;i++){
      if(a[i] == key){
        return i;
      }

  }  return -1;
  

 }
int main(){
  int n;
  int i;
   cin>>n;
  int a[n];
   for(int i = 0; i<n; i++){
    cin>>a[i];
 }
 cout<<"enter the key"<<endl;
 int key;
  cin>>key;
  cout<<find(a, n, key)<<endl;
return 0;
}