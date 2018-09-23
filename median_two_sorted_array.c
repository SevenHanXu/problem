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

int main(){
    return 0;
}
