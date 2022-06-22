/*
238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 

Example 1:

Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
 

Constraints:

2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

!class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        nums.insert(nums.begin(), 1); //inserting '1' at i = 0;
        nums.push_back(1);
        
        int n = nums.size();
        
        vector<int> ans; //to store final answer which will be product of prefix and suffix array)
        
        int pre[n]; // for calculating prefix product from i = 1
        int suf[n]; // for calculating suffix product from i = n-2

        pre[0] = 1;
        pre[n-1] = 1;
        
        suf[0] = 1;
        suf[n-1] = 1;
        
        for(int i = 1; i <= n-2 ; i++){
            pre[i] = pre[i-1]*nums[i-1];
        }
       
        for(int i = n-2; i >= 1 ; i--){
            suf[i] = suf[i+1]*nums[i+1];
        }
        
        for(int i = 1; i <= n-2 ; i++){
            ans.push_back(pre[i]*suf[i]);  
        }
        return ans;
    }
};
*/