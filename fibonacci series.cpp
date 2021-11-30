#include<iostream>
using namespace std;
int main(){
int a, b, n;
cin>>a>>b;
cin>>n;
cout<<a<<endl<<b<<endl;
while(b<n){
int c = a+b;
a = b;
b = c;
cout<<c<<endl;

}



return 0;
}