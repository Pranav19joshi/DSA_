/*
You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.

Examples:

Input: arr = [16, 17, 4, 3, 5, 2]
Output: [17, 5, 2]
Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
*/

class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        reverse(arr.begin(), arr.end());

        int max_val = arr[0]; 
        ans.push_back(max_val);
        
        for(int i = 1; i < arr.size(); i++){
            if(max_val <= arr[i]){
                ans.push_back(arr[i]);
                max_val = arr[i];
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};