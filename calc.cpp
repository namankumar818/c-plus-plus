// simple calculator

using namespace std;
#include<iostream>
int main()

{
 

  char op;
 double a, b;
 cout<<"choose the desired operator:('/','*','+','-')\n";
 cin>>op; 
cout<<"enter two values:";
cin>>a>>b;
switch(op)
{
 case'/':
cout<<a/b;
 break; 
 case'*':
cout<<a*b;
 break;
case'+':
cout<<a+b;
break;
case'-':
cout<<a-b;
break;
defalut :
cout<<"error";
}

return 0;
}





 
  











