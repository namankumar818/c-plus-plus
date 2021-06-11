//to find power in c++

using namespace std;
#include<iostream>
int main()
{ int power=1;
int a, b;
cout<<"enter the integer to find power";
cin>>a;
cout<<"enter the power";
cin>>b;
int i;
for(i=0; i<b; i++)
{
 power *= a;
}
cout<<"the power is :"<<power;





return 0;
}

