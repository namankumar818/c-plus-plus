#include<iostream>
using namespace std;
int sum(int n){
if(n == 0){
return 0;
}int presum = sum(n-1);
return n + presum;
}
int main(){
int a;
cin>>a;
cout<<sum(a);

return 0;
}