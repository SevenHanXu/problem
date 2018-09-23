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

int main(){
    return 0;
}
