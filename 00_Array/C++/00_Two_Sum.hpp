// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> out_indices = vector<int>(2);
        int sz = nums.size();
        
        for(int m=0;m<sz;m++)
        {
            for(int n=m+1;n<sz;n++)
            {
                if(nums[m]+nums[n] == target)
                {
                    if(m > n)
                    {
                        out_indices[0]=n;
                        out_indices[1]=m;
                    }
                    else
                    {
                        out_indices[0]=m;
                        out_indices[1]=n;                            
                    }
                    break;
                }
            }
        }
        
        return out_indices;
    }
};