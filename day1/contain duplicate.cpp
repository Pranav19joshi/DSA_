/*
217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.

Example 1:
Input: nums = [1,2,3,1]

Output: true*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(), nums.end());

        if(nums.size()==s.size()){
            return false;
        }
        return true;
    }
};