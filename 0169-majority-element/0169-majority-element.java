class Solution {
    public int majorityElement(int[] nums) {
       Arrays.sort(nums);
       int rs=nums[nums.length/2];
       return rs;
    }
}