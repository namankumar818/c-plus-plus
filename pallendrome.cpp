// pallendrome
#include<iostream>
#include<string>
using namespace std;
int main(){
  int n;
  cin>>n;
  bool cheak = 1;
  char arr[n+1];
  cin>>arr;
  for(int i=0; i<n; i++){
  if(arr[i] != arr[n-1-i]){
        cheak = 0;
         break;
     }

}  if(cheak == true){
      cout<<"pallendrome";
   }else
     cout<<"not pallendrome";




return 0;
}