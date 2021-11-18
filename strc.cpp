// counting the lenght of the string

using namespace std;
#include<iostream>
int main()
{
  char a[100];
  int count = 0;
  cout<<"enter the string\n";
  cin>>a;
  int i;
  for(i = 0; a[i] !='\0'; i++)
{ 
 if(i!=' ')
  count++;
}


cout<<count;



return 0;
}