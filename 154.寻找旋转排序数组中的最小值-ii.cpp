/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0, right=n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]>nums[right]) left=mid+1;
            else if(nums[mid]<nums[right]) right=mid;
            else right--;
        }
        return nums[left];
    }
};
// @lc code=end

