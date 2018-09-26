/*************************************************************************
	> File Name: sum_sequence.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/26 14:28:14 2018
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> ans;
        int head = 1, tail = 2, s = 3;
        while(head <= sum / 2){
            if(s < sum) s += ++tail;
            else if(s > sum) s -= head++;
            else{
                vector<int> temp;
                for(int i = head; i <= tail; i++) temp.push_back(i);
                ans.push_back(temp);
                s -= head++;
            }
        }
        return ans;
    }
};

int main{
    return 0;
}
