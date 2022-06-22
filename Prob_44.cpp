//! Array Manupulation Hakerrank https://www.hackerrank.com/challenges/crush/problem
#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
long long int ar[N];

int main(){
    int n, m;
    cin >> n >> m;
    
    // while (m--)
    // {
    //     int a, b, k;
    //     cin >> a >> b >> k; 
    //     for (int i = a; i <= b; i++)
    //     {
    //         ar[i] += k;
    //     }
        
    // }

    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k; 
        ar[a] += k;
        ar[b+1] -= k;

    }

    for (int i = 1; i <= n; i++)
    {
        ar[i] += ar[i-1];
    }
    


    long long int mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        mx = max(ar[i] , mx);
    }
    
    cout<<mx;

    //? TC => O( m * n + n) = 2*10^5 * 10^7
}