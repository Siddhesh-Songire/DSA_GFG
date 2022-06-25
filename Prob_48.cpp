/*
* 283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1



! class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int ct = 0;
//         for (auto it: nums){
//             if(it==0) ct++;
//         }
//         while(ct--){
//         int j = 1;
//         for(int i =0; i<nums.size()-1; i++){
//             if(nums[i] == 0) swap(nums[i],nums[j]);
//             j++;
//             }
//         }
//     }
// };
*A two-pointer approach could be helpful here. The idea would be to have one pointer for iterating the array and another pointer that just works on the non-zero elements of the array.
!class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};
*/