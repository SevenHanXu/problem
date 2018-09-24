/*************************************************************************
	> File Name: first_missing_postive.c
	> Author: 
	> Mail: 
	> Created Time: 日  9/23 22:49:52 2018
 ************************************************************************/

#include<stdio.h>
int firstMissingPositive(int* nums, int numsSize) {
    int n = numsSize;
    for(int i = 0; i < n; i++){
        while(nums[i] != (i + 1) && nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]){
            int temp = nums[nums[i] - 1];
            nums[nums[i] - 1] = nums[i];
            nums[i] = temp;
        }
    }
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != i + 1) return i + 1;
    }
    return numsSize + 1;
}
int main(){
    return 0;
}
/*假设对于大小为n的数组，这n个数可以分以下几种情况；
 * (1):n个数都小于等于0；
 * (2):n个数都大于n;
 * (3):存在一个或多个位于[1, n]的数
 * 对于情况1，要查找的缺失数是1；对于情况2，要查找的缺失数是1；
 * 假设这些位于[1,n]的数i，在数组中的位置为i-1，而小于等于0的数，以及大于n的数，在数组剩余位置：

如果数组所有的数都在[1,n]，那么每个元素都在其值减1的位置，此时要找的第一个缺失的整数就是n+1
否则，数组中，必然存在一个位置idx，其元素值不等于idx+1，而范围[1,n]就是正数序列最开始的n个数，因此，从左往右查找第一个下标加1不等于值的位置，那么要找的第一个缺失的正数就是该位置的下标加1
剩下的就是将范围在[1,n]的元素放置到正确的位置了。

使数组大小为n，刚好可以放下前n个正数，由于0不是正数，那么将数组下标i的槽存放正数i+1。经过这样的处理后，第一个不满足上述关系的槽应该存放的那个正数，就是第一个缺失的正数


 * */

 int missingNumber_2(int* nums, int numsSize) {
    int ans = 0, sum = 0;
    for(int i = 0; i <= numsSize; i++){
        sum ^= i;
    }
    for(int i = 0; i < numsSize; i++){
        ans ^= nums[i];
    }
    return ans ^= sum;
}
 /*0~n异或，结果与数组的每位异或值异或，因为相同的两个数异或为0，最后就找到结果*/
