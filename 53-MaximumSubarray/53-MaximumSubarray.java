// Last updated: 7/13/2026, 11:12:32 AM
class Solution {
    public int maxSubArray(int[] nums) {
        if(nums==null || nums.length==0){
            throw new IllegalArgumentException("array must contain 1 element");
        }
        
        int maxSOFar=nums[0];
        int currentMax=nums[0];
        for(int i=1;i<nums.length;i++){
            currentMax=Math.max(nums[i], currentMax+nums[i]);
            maxSOFar=Math.max(maxSOFar, currentMax);
        }
        return maxSOFar;
    }
}