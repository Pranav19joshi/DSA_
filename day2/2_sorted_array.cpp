/*
Given an array arr[], check whether it is sorted in non-decreasing order. Return true if it is sorted otherwise false.

Examples:

Input: arr[] = [10, 20, 30, 40, 50]
Output: true
Explanation: The given array is sorted.
*/

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        for(int i=0 ; i<arr.size()-1 ; i++){
            if(arr[i] > arr[i+1]){
                return false;
            }
        }
        return true;
        
    }
};