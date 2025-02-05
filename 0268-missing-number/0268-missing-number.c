int missingNumber(int* nums, int n) {
    int sum=n*(n+1)/2;
    int rs=0;
    for(int i=0;i<n;i++){
        rs+=nums[i];
    }

    return sum-rs;
}