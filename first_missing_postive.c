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
