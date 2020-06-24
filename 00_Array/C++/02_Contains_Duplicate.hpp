
// Given an array of integers, find if the array contains any duplicates.
// Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.

// Example 1:
// Input: [1,2,3,1]
// Output: true

// Example 2:
// Input: [1,2,3,4]
// Output: false

// Example 3:
// Input: [1,1,1,3,3,4,3,2,4,2]
// Output: true


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
   
        int sz = nums.size();
        sort(nums.begin(),nums.end());
        for(int m=0;m<sz-1;m++)
        {
            if(nums[m] == nums[m+1])
            {
                return true;
            }
        }
        return false;
        
//         int sz = nums.size();
//         for(int m=0;m<sz;m++)
//         {
//             for(int n=m+1;n<sz;n++)
//             {
//                 if(nums[m]==nums[n])
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
    }
};
