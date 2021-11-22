//kadane's algorithm
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int  i = 0; i<n; i++){
cin>>a[i];
}
int cursum = 0;
int maxsum = INT_MIN;
for(int i = 0; i<n; i++){
cursum += a[i];
if(cursum<0){
cursum = 0;
}
maxsum = max(cursum, maxsum);
}cout<<maxsum;
return 0;
}