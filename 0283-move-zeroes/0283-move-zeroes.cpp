class Solution {
public:
    void fun(vector<int>& nums,int n){
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            {
                for(int j=i+1;j<n;j++){
                    nums[j-1]=nums[j];
                }
                return;
            }
        }
    }
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();

        int c=0;

        for(int i=0;i<n;i++){
            if(nums[i]==0) c++;
        }

        for(int i=0,k=n-1;i<c;i++,k--){
            fun(nums,n);
            nums[k]=0;
        }

        
    }
};