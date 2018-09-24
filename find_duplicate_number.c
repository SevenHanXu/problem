/*************************************************************************
	> File Name: find_duplicate_number.c
	> Author: 
	> Mail: 
	> Created Time: 一  9/24 12:12:18 2018
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
/*二分查找
 * 假设1～n的中间元素是mid,遍历数组
 * 统计比mid的小的元素个数count
 * 如果count > mid,那么重复数字一定比mid小
 * 如果count <= mid,那么重复数字一定比mid大
 * 时间复杂度:O(nlogn)
 * 空间复杂度:O(1)
* */
int main(){
    return 0;
}
