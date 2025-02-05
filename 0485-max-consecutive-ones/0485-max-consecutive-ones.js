/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function(nums) {
    let max=0;
    let count=0;
    let n=nums.length;
    for(let i=0;i<n;i++){
        if(nums[i]==1){
            count++;
            max=Math.max(count,max);
        }
        else{
            count=0;
        }
    }

    return max;
};