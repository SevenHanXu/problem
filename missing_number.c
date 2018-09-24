/*************************************************************************
	> File Name: missing_number.c
	> Author: 
	> Mail: 
	> Created Time: 一  9/24 14:31:31 2018
 ************************************************************************/

#include<stdio.h>
int findDuplicate(int* nums, int numsSize) {
    int head = 0, tail = numsSize, mid;
    while(head < tail){
        mid = (head + tail) / 2;
        int count = 0;
        for(int i = 0; i < numsSize; i++){
            if(nums[i] <= mid) count++;
        }
        if(count > mid) tail = mid;
        else head = mid + 1;
        
    }
    return head;
}

int main(){
    return 0;
}
/*高斯公式
 * 求0～n的和，然后求数组中所有元素的和，相减就是缺失的数*/
