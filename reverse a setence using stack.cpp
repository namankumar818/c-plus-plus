#include<iostream>
#include<string>
#include<stack>
using namespace std;
void reverse(string s){
int n = s.size();
char a;
stack<char> st;
for(int i = 0; i<n; i++){
st.push(s[i]);
}
while(!st.empty()){
cout<<st.top();
st.pop();
 
}
}
int main(){
string s;
getline(cin, s);
reverse(s);
return 0;
}