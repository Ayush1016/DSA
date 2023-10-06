Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int l=lower_bound(nums.begin(),nums.end(),target+1)-nums.begin()-1;
        if(f<nums.size()&&nums[f]==target){
        return {f,l};
        }
        return {-1,-1};
    }
};
