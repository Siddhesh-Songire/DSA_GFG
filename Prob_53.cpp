/*
*40. Combination Sum II

        Given a collection of candidate
        numbers(candidates) and
    a target number(target),
    find all unique combinations in candidates where the candidate numbers sum to target.

    Each number in candidates may only be used once in the combination.

    Note : The solution set must not contain duplicate combinations.

           Example 1 :

    Input : candidates = [ 10, 1, 2, 7, 6, 1, 5 ],
            target = 8 Output : [
                [ 1, 1, 6 ],
                [ 1, 2, 5 ],
                [ 1, 7 ],
                [ 2, 6 ]
            ]

class Solution
{
public:
    void findCombination(int ind, vector<int> &arr, int target, vector<int> &ds, vector<vector<int>> &ans)
    {
        if (target == 0)
        {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ds.push_back(arr[i]);
            findCombination(i + 1, arr, target - arr[i], ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(0, candidates, target, ds, ans);
        return ans;
    }
};
*/