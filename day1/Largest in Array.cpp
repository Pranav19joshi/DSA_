/*
Given an array arr[]. The task is to find the largest element and return it.

Examples:
Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
*/


class Solution {
  public:
    int largest(vector<int> &arr) {
        int big = -1;
        for(int i=0 ; i<arr.size() ;i++){
            if(arr[i]>big){
                big = arr[i];
            }
        }
        return big;
        
    }
};
