// finding the maximum and the minimum number of the array
#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0; i<n; i++){
cin>>arr[i];

}
int maxnum = INT_MIN;
int mininum = INT_MAX;
for(int i = 0; i<n; i++){
maxnum = max(maxnum, arr[i]);
mininum = min(mininum, arr[i]);

}cout<<maxnum<<" "<<mininum;

return 0;
}