/*
Given array a of N integers. Given Q queries and in each query
given L and R print sum of array elements from index L to R(L.R included)

Constraints
1 <= N <= 10^5
1 <= a[i] <= 10^9
1 <= Q <= 10^5
1 <= L, R <= N
*/


#include<bits/stdc++.h>
using namespace std;

int main(){

    int N= 1e5;
    int pf[N];  // prefix array
    pf[0] = 0;

    int n; 
    cin>>n;
    int a[n];
    for (int i = 1; i <= n; i++)  //? starts from index 1
    {
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int L ,R;
        cin>>L>>R;
        cout<< pf[R] - pf[L-1]<<endl;
    }
}