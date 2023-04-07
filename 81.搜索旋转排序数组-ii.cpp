/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return false;
        if(n==1) {
            return nums[0]==target;
        }
        int left=0, right =n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[left]==nums[mid]&&nums[mid]==nums[right]){
                ++left;
                --right;
            }else if(nums[left]<=nums[mid]){
                if(nums[left]<= target&&nums[mid]>target){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }else{
                if(nums[mid]<target&&nums[right]>=target){
                    left=mid+1;
                }else{
                    right = mid-1;
                }
            }
        }
        return false;
    }
};
// @lc code=end

