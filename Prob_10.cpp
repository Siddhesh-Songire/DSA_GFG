//* Maximum Fruits
/*Problem
You have given N plates each plate contains some number of fruits. You will be given Q queries of type: add X number of fruits in each plate from L to R.

Input:

First line of input contains N, number of plates.

Next line contains N integers, number of fruits in each plate.

Third line will contain Q, number of queries.

Next Q lines follow queries of any of the following type: X L R.

Output:

After completing all the queries, print the maximum number of fruits among all the plates.

Constraints:

1<=N<=10^5;

1<=Q<=10^5;

0<=L<=R<N;

1<=X<=100;
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int hsh[N];
int arr[N];
int main()

{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, l, r;

        cin >> x >> l >> r;
        l++, r++;

        hsh[l] += x;
        hsh[r + 1] -= x;
    }

    long long int max = 0;
    for (int i = 1; i <= n; i++)

    {
        hsh[i] += hsh[i - 1];
        arr[i] += hsh[i];
        if (arr[i] > max)
            max = arr[i];
    }

    cout << max;
}