// Balanced Paranthesis

#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s) {
    stack<char> st;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            st.push(s[i]);
        else if(st.top() == '(' && s[i] == ')')
            st.pop();
        else if(st.top() == '{' && s[i] == '}')
            st.pop();
        else if(st.top() == '[' && s[i] == ']')
            st.pop();
        else
            st.push(s[i]);
    }
    
    if (st.empty()) {
        return "YES";
    }
    else return "NO";
}

int main()
{
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        cout << isBalanced(s);
        cout<<endl;
    }
}