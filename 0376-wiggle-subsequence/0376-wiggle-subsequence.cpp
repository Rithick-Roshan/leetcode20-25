class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        // int first=2;
        int n=nums.size();

        // for(int i=1;i<n-2;i++){
        //     if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) first++;
        //     else if(nums[i]<nums[i+1] && nums[i]<nums[i-1]) first++;
        // }

        // return first;
        int v=1,p=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])  p=v+1;
            if(nums[i]<nums[i-1]) v=p+1;
        }

        return max(v,p);



    }
};