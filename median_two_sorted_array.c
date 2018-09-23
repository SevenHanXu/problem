/*************************************************************************
	> File Name: median_two_sorted_array.c
	> Author: 
	> Mail: 
	> Created Time: 日  9/23 22:16:45 2018
 ************************************************************************/

#include<stdio.h>
int findKthnumber(int *nums1, int numsSize1, int *nums2, int numsSize2, int k){
    if(numsSize1 > numsSize2) return findKthnumber(nums2, numsSize2, nums1, numsSize1, k);
    if(numsSize1 == 0) return nums2[k - 1];
    if(k == 1) return nums1[0] < nums2[0] ? nums1[0] : nums2[0];
    int mid1, mid2;
    mid1 = k / 2 < numsSize1 ?  k / 2 : numsSize1;
    mid2 = k - mid1;
    if(nums1[mid1 - 1] > nums2[mid2 - 1]) return findKthnumber(nums1, numsSize1, nums2 + mid2, numsSize2 - mid2, k - mid2);
    else if(nums1[mid1 - 1] < nums2[mid2 - 1])return findKthnumber(nums1 + mid1, numsSize1 - mid1, nums2, numsSize2, k - mid1);
    else return nums1[mid1 - 1]; 
    
}


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int len = nums1Size + nums2Size;
    if(len % 2) return findKthnumber(nums1, nums1Size, nums2, nums2Size, (len + 1) / 2);
    else return (findKthnumber(nums1, nums1Size, nums2, nums2Size, len / 2) + findKthnumber(nums1, nums1Size, nums2, nums2Size, len / 2 + 1)) / 2.0;
}
/*找两个有序数组的中位数，可以转化成找两个数组的第k大个数
* 由于两个数组不一定一样大，将nums1总设置成个数比较少的数组
* 在两个数组分别找nums[k / 2]的数进行比较大小
* (1)当nums1.size() < k / 2时，就将mid1的指针指向nums1的最后一位，mid2的指针指向nums2的第k - mid1位
* (2)如果nums1[mid1] > nums2[mid2] 
* nums1[2, 3, 4, 5]
* nums2[0, 1, 2, 3, 4]
* 那么nums2的左半部分一定比第k个元素小，一定不是第k个元素，将其舍去，递归查找第k - mid2个元素
* (3)如果nums1[mid1] < nums2[mid2]
* nums1[1, 2, 3, 4]
* nums2[2, 3, 4, 5, 6]
* 那么nums1的左半部分一定比第k个元素小，一定不是第k个元素，将其舍去，递归查找第k - mid1个元素
* 当nums1[mid1] == nums[mid2]时，保证nums1[mid1] == nums[mid2]是第k个元素
**/
int main(){
    return 0;
}
