/*
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
*/class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int max1 = INT_MIN;
        int max2 = INT_MIN;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max1) {
                max2 = max1;
                max1 = arr[i];
            }
            else if (arr[i] > max2 && arr[i] < max1) {
                max2 = arr[i];
            }
        }

        return (max2 == INT_MIN ? -1 : max2);
    }
};