

#include <bits/stdc++.h>

using namespace std;
bool bracket(string s){
    stack<char> st;
    int n = s.size();
    for(int i = 0; i<n; i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if((st.top() == '{' && s[i] == '}') || (st.top() == '(' && s[i] == ')') || (st.top() == '[' && s[i])){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
        
        
    }
    if(st.empty()){
        return true;
    }
    return false;
}

int main()
{
    string s;
    cin>>s;
    if(bracket(s)){
        cout<<"balanced paranthesis";
    }
    else
    cout<<"not balanced parathesis";

    return 0;
}
