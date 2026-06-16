/*
268 : Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 
Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation:
n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = nums.size() ;
        int sumgiven = 0;
        int total = 0;
        for(int i= 0 ; i<count ; i++){
            sumgiven = sumgiven + nums[i];
        }
        for(int j=0 ; j<=count ; j++){
            total = total+ j;
        }
        return total-sumgiven;
    }
};
