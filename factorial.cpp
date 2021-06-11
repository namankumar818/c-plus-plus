// factorial
#include<iostream>
using namespace std;
int main()
{ int fact = 1;
int a;
cout<<"enter the integer";
cin>>a;
int i;
for(i=1; i<=a; i++)
{ fact *= i;
}
cout<<fact;


return 0;
}