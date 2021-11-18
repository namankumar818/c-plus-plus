//prime using while loop
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   int n;
  cin>>n;
  int i=2, flag = 0;
   while(i<= sqrt(n))
    {
       if(n%i==0){
        
        flag=1;
       break;
    }
       i++;
       
   }
    if(flag == 0)
   cout<<" prime number"<<endl;
    else
       cout<<"not a prime number"<<endl;


return 0;
}