class Solution {
public:
    bool isSort(vector<int> & nums,int i,int n){
        for(int j=1;j<n;j++,i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
    bool check(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
           if(isSort(nums,i,n)) return true;
        }
        return false;
    }
};