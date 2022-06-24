/*
* 268. Missing Number

Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.

Example 2:
Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

//* Solution 
Hashing
? Time complexity : O(n) Space: O(n)
!class Solution {
public:
    int missingNumber(vector<int>& nums) {
         unordered_map<int,int> mp;
         for(auto it : nums){
             mp[it]++;
        }
        
         for(int i = 0; i <= nums.size(); i++){
             auto it = mp.find(i);
             if(it == mp.end()) return i;
         }
         return 0;
		 }
 };


? Time complexity : O(n) Space: O(1)

!class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0] == 1) return 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1] + 1) return nums[i]-1;
        }
        return nums.size();
       }
};








*/