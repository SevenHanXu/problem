/*************************************************************************
	> File Name: single_number.c
	> Author: 
	> Mail: 
	> Created Time: 一  9/24 17:15:12 2018
 ************************************************************************/

#include<stdio.h>
#include <stdlib.h>
int missingNumber(int* nums, int numsSize) {
    int ans = 0, sum = 0;
    for(int i = 0; i <= numsSize; i++){
        sum ^= i;
    }
    for(int i = 0; i < numsSize; i++){
        ans ^= nums[i];
    }
    return ans ^= sum;
}
int main(){
    int *nums = (int *) malloc(sizeof(100));
    int numsSize;
    scanf("%d", &numsSize);
    for(int i = 0; i < numsSize; i++){
        scanf("%d", &nums[i]);
    }
    printf("%d\n", missingNumber(nums, numsSize));
    return 0;
}
/*找到只出现一次的数字
 * 每个数字异或，和自己相等的话，异或结果为0*/
