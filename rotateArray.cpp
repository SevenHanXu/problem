/*************************************************************************
	> File Name: rotateArray.cpp
	> Author: 
	> Mail: 
	> Created Time: 日  9/23 18:07:33 2018
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if(rotateArray.size() == 0) return 0;
        if(rotateArray.size() == 1) return rotateArray[0];
        int size = rotateArray.size();
        int head = 0, tail = size - 1, mid = 0;
        while(rotateArray[tail] <= rotateArray[head]){
            if(tail - head <= 1){
                mid = tail;
                break;
            }
            mid = (head + tail) / 2;
            if(rotateArray[head] == rotateArray[tail] && rotateArray[head] == rotateArray[mid]){
                int min = rotateArray[0];
                for(int i = 0; i < size; i++){
                    if(rotateArray[i] < min) min = rotateArray[i];
                }
                return min;
            }
            if(rotateArray[head] <= rotateArray[mid]) head = mid;
            if(rotateArray[tail] >= rotateArray[mid]) tail = mid;
        }
        return rotateArray[mid];
    }
};
/*排过序的数组经过旋转之后，请你找出最小的数字； [1,2,3,4,5]旋转之后位[3,4,5,1,2]
 * 设置两个指针，head指向num[0],tail指向num[size - 1],mid=(head + tail) >> 2;
 * 当num[mid]大于等于num[head]时，head = mid;head一直指向大数的最后一个；
 * 当num[mid]小于等于num[tail]时，tail = mid;tail一直指向小数的第一个；
 * 当tail - head <= 1时，就将num[tail]输出；
 */
 /*当数组为[0,1,1,1]时，旋转之后为[1,0,1,1]
 * 我们会发现整个数组的num[head]=num[tail]=mun[mid]
 * 我们只能顺序查找数组中的最小值
 */
 /*当数组没有旋转的时候，直接将mid设置为0，不进入循环，直接输出*/
int main(){
    return 0;
}
