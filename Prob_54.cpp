/* https://leetcode.com/problems/find-the-duplicate-number/
*287. Find the Duplicate Number

Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:

Input: nums = [1,3,4,2,2]
Output: 2

!class Solution {
    public:
    
    int findDuplicate(vector<int>& nums) {

        // Lambda function to count how many numbers are less than or equal to 'cur'
        auto small_or_equal = [&](int cur) {
            int count = 0;
            for (auto &num: nums) {
                if (num <= cur)
                    count++;
            }
            return count;
        };
        
        // 'low' and 'high' represent the range of values of the target
        int low = 1, high = nums.size();
        int duplicate = -1;
        while (low <= high) {
            int cur = (low + high) / 2;
            
            if (small_or_equal(cur) > cur) { 
                duplicate = cur;
                high = cur - 1;
            } else {
                low = cur + 1;
            }
        }

        return duplicate;
    }
};
*/