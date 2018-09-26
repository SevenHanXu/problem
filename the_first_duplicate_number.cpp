/*************************************************************************
	> File Name: the_first_duplicate_number.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 09:55:54 2018
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void FindNumsAppearOnce(vector<int> data,int* num1,int *num2) {
        int ans = 0, size = data.size();
        for(int i = 0; i < size; i++){
            ans ^= data[i];
        }
        int ind = 0;
        while((ans & 1) == 0){
            ind++;
            ans = ans >> 1;
            
        }
        
        *num1 = 0, *num2 = 0;
        for(int i = 0; i < data.size(); i++){
            if(is_one(data[i],ind)) *num1 ^= data[i];
            else *num2 ^= data[i];
        }
    }
    bool is_one(int num, int ind){
            while(ind){
                num = num >> 1;
                ind--;
            }
            return (num & 1);
     }
};

int main(){
    return 0;
}
/*1.将每个数字都异或，求出来的就是两个不一样的数字异或出来的结果ans;
 *2.既然两个数字不一样，比如4和6，那么4与6异或的结果为2[10]那么就可以根据两个数字不一样，将数组分成两个
 *3.找到两个数字不一样的位置ind
 *4.根据ind把数组分成两个数组
 *5.在每个数组里面找到那个不一样的值
 * */
