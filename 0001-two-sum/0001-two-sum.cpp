class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> arr(2,0);
        for(int i=0;i<nums.size();i++){
            if(map.contains(target-nums[i])){
                arr[1]=i;
                arr[0]=map[target-nums[i]];
                return arr;
            }
            map[nums[i]]=i;
        }
        return arr;
    }
};