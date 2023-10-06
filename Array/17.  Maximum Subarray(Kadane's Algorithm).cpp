Link: https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxarr=nums[0];
        for(int i=0;i<nums.size();i++){
                sum=sum+nums[i];
                maxarr=max(sum,maxarr);
        if(sum<0){
            sum=0;
        }
        }
        return maxarr;
    }
};
