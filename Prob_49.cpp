/* 
*  Power of Three
 Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

 

Example 1:

Input: n = 27
Output: true
Example 2:

Input: n = 0
Output: false
Example 3:

Approach 1: Loop Iteration
One simple way of finding out if a number n is a power of a number b is to keep dividing n by b as long as the remainder is 0. This is because we can write

Hence it should be possible to divide n by b x times, every time with a remainder of 0 and the end result to be 1.
!class Solution {
public:
bool isPowerOfThree(int n) {
	// if(n <= 1) return n == 1;
	// return n % 3 == 0 && isPowerOfThree(n / 3);
    
    if (n < 1) {
            return false;
    }

        while (n % 3 == 0) {
            n /= 3;
        }

        return n == 1;
}
};
*/