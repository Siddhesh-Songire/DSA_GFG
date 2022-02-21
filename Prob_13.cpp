/*
*Twice Counter
Given a list of N words. Count the number of words that appear exactly twice in the list.

Example 1:

Input:
N = 3
list = {Geeks, For, Geeks}
Output: 1
Explanation: 'Geeks' is the only word that
appears twice.
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int countWords(string list[], int n)
    {
        unordered_map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            m[list[i]]++;
        }
        int cnt = 0;
        for (auto ele : m)
        {
            if (ele.second == 2)
                cnt++;
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string list[n];
        for (int i = 0; i < n; i++)
            cin >> list[i];
        Solution ob;
        cout << ob.countWords(list, n) << endl;
    }
    return 0;
}
// } Driver Code Ends