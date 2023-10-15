Link: https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        if(nums[0]>nums[1])
        return 0;
        if(nums[n-1]>nums[n-2])
        return n-1;

        int s=1;
        int h=n-2;
        while(s<=h){
        int mid=(s+h)/2;
            if(nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1]){
                s=mid+1;
            }
            else
            h=mid-1;
        }
        return-1;
    }
};
