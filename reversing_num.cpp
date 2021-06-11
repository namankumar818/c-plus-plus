//reversing a number
#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int re=0;
 while(n>0){
  int lst = n%10;
 re = re*10 + lst;
  n = n/10;


}cout<<re;
   
return 0;
}
