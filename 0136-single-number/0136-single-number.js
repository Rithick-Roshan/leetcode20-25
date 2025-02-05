/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let a=0;
    let n=nums.length;

    for(let i=0;i<n;i++){
        a^=nums[i];
    }

    return a;
};