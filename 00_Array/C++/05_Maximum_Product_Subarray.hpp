// Given an integer array nums, find the contiguous subarray within an array (containing at least one number) 
// which has the largest product.

// Example 1:

// Input: [2,3,-2,4]
// Output: 6
// Explanation: [2,3] has the largest product 6.
// Example 2:

// Input: [-2,0,-1]
// Output: 0
// Explanation: The result cannot be 2, because [-2,-1] is not a subarray.


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sz = nums.size();
        int max_Product = INT_MIN;
        
        for(int m=0;m<sz;m++){
            int Product = 1;
            for(int n=m;n<sz;n++){
                Product*=nums[n];
                if(Product > max_Product){
                    max_Product = Product;
                }
            }
        }
        
        return max_Product;
    }
};