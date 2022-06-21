//*Check Matching & Balanced Brackets using Stack

#include <iostream>
#include<stack>
using namespace std;
int main()
{

string str;
cout<<"Enter the bracket sequence: ";
cin>>str;

stack<char> s;

for (int i = 0; i < str.length(); i++)
{
    if (str[i] == '(' || str[i] == '{' || str[i] == '[' )
    {
        s.push(str[i]);
    }
    
    else if(s.top() == '(' && str[i] == ')')
        s.pop();

    else if(s.top() == '{' && str[i] == '}')
        s.pop();

    else if(s.top() == '[' && str[i] == ']')
        s.pop();
    
    else
        s.push(str[i]);
}


if(s.empty())
    cout<<"Valid String";
else    
    cout<<"Invalid String";

    return 0;
}