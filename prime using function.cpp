//prime number using function
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
for(int  i = 2; i<=sqrt(n); i++){
  if(n%i == 0){
    return false;}
}

return true;
}
int main(){
int n;
cin>>n;
if(isprime(n)){
cout<<"prime";}
else
cout<<"not prime";


return 0;
}






