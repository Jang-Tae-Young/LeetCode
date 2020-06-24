// Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal 
// to the product of all the elements of nums except nums[i].

// Example:

// Input:  [1,2,3,4]
// Output: [24,12,8,6]
// Constraint: It's guaranteed that the product of the elements of any prefix or suffix of the array 
// (including the whole array) fits in a 32 bit integer.

// Note: Please solve it without division and in O(n).

// Follow up:
// Could you solve it with constant space complexity? (The output array does not count as extra space 
// for the purpose of space complexity analysis.)


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int sz = nums.size();
        vector<int> output = vector<int>(sz);
        vector<int> Left   = vector<int>(sz);
        vector<int> Right  = vector<int>(sz);
        
        Left[0]=1;
        for(int k=1;k<sz;k++)
        {
            Left[k] = nums[k-1]*Left[k-1];
        }
        
        Right[sz-1]=1;
        for(int k=sz-2;k>=0;k--)
        {
            Right[k] = nums[k+1]*Right[k+1];
        }

        for(int k=0;k<sz;k++)
        {
            output[k] = Left[k]*Right[k];   
        }
        
        return output;
    }
};