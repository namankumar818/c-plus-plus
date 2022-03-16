#include<iostream>
using namespace std;
void ind(int a[], int n, int s){

int i = a[0];
int j = a[n-1];
while(i<j){
if(a[i] + a[j] == s){
cout<<i<<" "<<j;
break;
}
else if(a[i] + a[j] > s){
j--;
}
else
i++;
}
}



int main(){

int n;
cin>>n;
int a[n];
for(int i = 0; i<n; i++){
cin>>a[i];
}
int s;
cin>>s;
ind(a, n, s); 
return 0;

}


