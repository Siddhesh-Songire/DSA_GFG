/*
 * GROUP ANAGRAMS
 

! Brute force approach by me but it gave TLE error 
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> groupAnagrams;
        int l = strs.size();
        // bool flag = false;
        for (int i = 0; i < l; i++)
        {
            vector<string> temp;
            if (strs[i] != "0")
                temp.push_back(strs[i]);
            if (strs[i] == "0")
                continue;
            for (int j = i + 1; j < l; j++)
            {
                // bool flag = isAnagram(strs[i],strs[j]);
                if (isAnagram(strs[i], strs[j]))
                {
                    if (strs[j] != "0")
                        temp.push_back(strs[j]);
                    strs[j] = "0";
                }
            }
            groupAnagrams.push_back(temp);
        }
        return groupAnagrams;
    }

    bool isAnagram(string s, string t)
    {
        bool flag;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            return true;
        else
            return false;
    }
};


! more optimal solution
* using unorderd map

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;
        
        for(string s :strs){
            string t = s;
            sort(t.begin(), t.end());
            mp[t].push_back(s);
        }
        
        vector<vector<string>> anagrams;
        for(auto it : mp){
            anagrams.push_back(it.second);
        }
        return anagrams;
    }

};

T.C => O(n*klog(k))
*/