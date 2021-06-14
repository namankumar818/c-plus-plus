//buble sort

using namespace std;
#include<iostream>
int main()
{int a[100];
int n, i, j, temp;
cout<<"enter the number of elements: ";
cin>>n;
for(i = 0; i<n; i++)
{cout<<"enter the elements : ";
cin>>a[i];
}
for(i = 0; i<n-1; i++)

 for(j = 0;j<n-i-1; j++)
{ if(a[j]<a[j+1])
{
   temp = a[j+1];
   a[j+1] = a[j];
   a[j] = temp;

}
  

}

cout<<"the sorted array is:\n ";
for(i=0; i<n; i++)
{cout<<"\n"<< a[i];
}









return 0;
}