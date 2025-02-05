int singleNumber(int* nums, int n) {
    int a=0;
    for(int i=0;i<n;i++){
        a^=nums[i];
    }

    return a;
}