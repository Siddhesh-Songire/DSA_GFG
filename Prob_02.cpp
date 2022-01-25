//!  Find duplicates in an array

/*Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.

Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3
Explanation: 2 and 3 occur more than once
in the given array.

//* Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n).

Constraints:
1 <= N <= 105
0 <= A[i] <= N-1, for each valid i
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    { // use of hash table
        vector<int> v;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            ++a[arr[i]];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 1)
            {
                v.push_back(i);
            }
        }

        if (v.size() == 0)
        {
            v.push_back(-1);
        }

        return v;
    }

    //* One more easy way
    vector<int> duplicates(int arr[], int n)
    {
        vector<int> v(1e5, 0);
        for (int i = 0; i < n; i++)
        {
            v[arr[i]]++; // for frequency
        }
        vector<int> ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > 1)
                ans.push_back(i);
        }

        if (ans.size() == 0)
            ans.push_back(-1);

        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends