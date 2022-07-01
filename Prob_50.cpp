/*
*14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".



Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


Constraints:

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.

!class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        int ls = strs[n - 1].size();
        int fs = strs[0].size();
        string ans;

        for (int i = 0; i < fs; i++)
        {
            if (strs[0][i] != strs[n - 1][i])
            {
                break;
            }
            else
                ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
*/