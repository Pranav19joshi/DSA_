/*
Union of 2 Sorted Arrays
Difficulty: MediumAccuracy: 31.39%Submissions: 547K+Points: 4Average Time: 20m
Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order.
Union of two arrays can be defined as the set containing distinct common elements that are present in either of the arrays.

Examples:

Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
*/

class Solution {
public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> ans;
        int i = 0, j = 0; 
        
        while (i < a.size() && j < b.size()) {
            while (i > 0 && i < a.size() && a[i] == a[i - 1]) {
                i++;
            }
            while (j > 0 && j < b.size() && b[j] == b[j - 1]) {
                j++;
            }
            
            if (i >= a.size() || j >= b.size()) break;

            if (a[i] <= b[j]) {
                ans.push_back(a[i]);
               
                if (a[i] == b[j]) {
                    j++;
                }
                i++;
            } else {
                ans.push_back(b[j]);
                j++;
            }
        }
        
        while (i < a.size()) {
            if (i > 0 && a[i] == a[i - 1]) {
                i++;
                continue;
            }
            ans.push_back(a[i]);
            i++;
        }
        
        while (j < b.size()) {
            if (j > 0 && b[j] == b[j - 1]) {
                j++;
                continue;
            }
            ans.push_back(b[j]);
            j++;
        }
        
        return ans;
    }
};