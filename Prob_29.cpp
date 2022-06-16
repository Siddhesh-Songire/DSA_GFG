/*
* 136. Single Number

Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4






!class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int> m;
        for(int i = 0; i< nums.size(); i++){
            m[nums[i]]++;
        }
        
        int k;
        for(auto it : m){
            if(it.second == 1) k = it.first;
        }
        return k;
    }
};
*/