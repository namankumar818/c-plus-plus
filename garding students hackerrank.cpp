#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i = 0; i<n; i++){
cin>>a[i];
}
for(int i = 0; i<n; i++){
if(a[i]<38){
cout<<a[i];
}
else{
int ig  = (a[i]/5+1) * 5;
if(ig - a[i] < 3){
cout<<ig;
}
else
cout<<a[i];

}
cout<<endl;
}


return 0;
}