void moveZeroes(int* nums, int n) {
    int rs[n];
    int c=0;

    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            rs[c++]=nums[i];
        }
    }

    for(int i=c;i<n;i++){
        rs[i]=0;
    }
    for(int i=0;i<n;i++){
        nums[i]=rs[i];
    }
}