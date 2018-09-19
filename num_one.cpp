/*************************************************************************
	> File Name: num_one.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  9/19 23:41:00 2018
 ************************************************************************/

#include<iostream>
using namespace std;

int num_one(int n){
    int count = 0;
    while(n){
        count++;
        n = (n - 1) & n;
    }
    return count;
}

int main(){
    int n;
    cin >> n;
    cout << num_one(n) << endl;
    return 0;
}
//把一个整数减1与它本身做“与”运算，会把最右边的1置为0
