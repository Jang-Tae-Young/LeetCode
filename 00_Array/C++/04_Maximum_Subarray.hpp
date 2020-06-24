// Given an integer array nums, find the contiguous subarray (containing at least one number) 
// which has the largest sum and return its sum.

// Example:

// Input: [-2,1,-3,4,-1,2,1,-5,4],
// Output: 6
// Explanation: [4,-1,2,1] has the largest sum = 6.
// Follow up:

// If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, 
// which is more subtle.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sz = nums.size();
        int max_sum=INT_MIN;
        
        for(int m=0;m<sz;m++){
            int sum=0;
            for(int n=m;n<sz;n++){
                sum+=nums[n];
                if(max_sum < sum)
                {
                    max_sum = sum;
                }
            }
        }
        return max_sum;
    }
};


