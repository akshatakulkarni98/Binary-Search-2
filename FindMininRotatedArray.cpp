// Time Complexity : O(logN) where N=Number of Elements in array
// Space Complexity : O(1)
// Did this code successfully run on Leetcode : Yes
// Any problem you faced while coding this : No
//Implemented using Binary Search approach.

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;

        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if((mid == 0 || nums[mid]<nums[mid-1]) && (mid == nums.size()-1 ||nums[mid]<nums[mid+1]))
            {
                return nums[mid];
            }
            else if(nums[mid]<nums[end])
            {
                start = mid+1;
            }
            else
                end = mid -1;
        }
        return -1;

    }
};
