/*
You are given an array of integers arr[]. You have to reverse the given array.

Examples:
Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are [1, 4, 3, 2, 6, 5].
 After reversing the array, the first element goes to the last position, the second element goes to the second 
last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].
*/

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int k = arr.size();
        int j = k-1 ;
        for(int i= 0 ; i<=j; i++){
            
            swap(arr[i],arr[j]);
            j= j-1;
        }
        
    }
};