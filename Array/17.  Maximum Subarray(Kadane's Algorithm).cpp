Link: https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxarr=nums[0];                 // Update the current sum by adding the current element
        for(int i=0;i<nums.size();i++){
                sum=sum+nums[i];
                maxarr=max(sum,maxarr);     // Update maxarr with the maximum of the current sum and maxarr
        if(sum<0){
            sum=0;                // Reset sum to 0 if it becomes negative
            }
        }
        return maxarr;
    }
};
