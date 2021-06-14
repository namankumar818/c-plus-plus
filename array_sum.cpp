// array sum
#include<iostream>
using namespace std;
int main()
{
  int arr[100];
  int i, n, sum=0;
  cout<<"enter the value :";
  cin>>n;
  for(i=0; i<n; i++)
  {
  cout<<"the index value";
  cin>>arr[i];
  }
 for(i=0; i<n; i++)
 {
  sum += arr[i];

 }

 cout<<sum;





return 0;



}