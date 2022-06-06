//*  Two Sum

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.
*/

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int,int> hsh;
    vector <int> ans;
        for(int i = 0; i < nums.size(); i++){
            if(hsh.find(target - nums[i]) != hsh.end()){
                ans.push_back(hsh[target - nums[i]]);
                ans.push_back(i);
            }
            else hsh[nums[i]] = i;
               }
                              return ans;

    }
};

*/