#include<iostream>
using namespace std;
void prime(int a, int b){
int flag;
for(int i = a; i<=b; i++){
if(i == 1||i == 0){
continue;
}flag = 1;
for(int j = 2; j<=i/2; j++){
if(i%j == 0){
flag = 0;
break;}
}
if(flag == 1){
cout<<i<<" ";}
}
}
int main(){
int a, b;
cin>>a>>b;
prime(a,b);


return 0;
}