#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;


    string str = to_string(n);

    string srev;
    for (int i = str.length()-1; i >= 0; i--)
    {
        srev.push_back(str[i]); 
    }
    if(srev == str){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
}