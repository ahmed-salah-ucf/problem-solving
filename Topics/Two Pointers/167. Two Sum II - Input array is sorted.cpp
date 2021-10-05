/*
 * Directed by: Ahmed Salah
 * Problem link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 * */

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0,j = numbers.size()-1;
        while (true){
            int sum = numbers[i] + numbers[j];
            if (sum == target) break;
            else if(sum > target) j--;
            else i++;
        }
        return {i+1, j+1};
    }
};