/*************************************************************************
	> File Name: find_peak_element.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/23 20:20:48 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int findPeakElement(int* nums, int numsSize) {
    int head = 0, tail = numsSize - 1, mid;
    while(head < tail){
        mid = (head + tail) / 2;
        if(nums[mid] < nums[mid + 1]) head = mid + 1;
        else if(nums[mid] > nums[mid + 1]) tail = mid;
    }
    return head == tail ? head : -1;
}
/*当num[mid] > num[mid + 1]的时候，说明峰值在左侧，num[mid]有可能是峰值，tail = mid
 *当num[mid] < num[mid + 1]的时候，说明峰值在右侧，而num[mid]不可能是峰值。head = mid；
* */
int main(){
    return 0;
}
