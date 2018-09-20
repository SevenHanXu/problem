/*************************************************************************
	> File Name: pow.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/20 10:11:51 2018
 ************************************************************************/

#include<iostream>
using namespace std;

double pow(double base, int exponent){
    if(exponent == 0) return 1;
    if(exponent == 1) return base;
    double ans = pow(base, exponent / 2);
    ans *= ans;
    if(exponent % 2) return ans * base;
    else return ans;
}

double abs_pow(double base, int exponent){
    exponent = -exponent;
    double ans = pow(base, exponent);
    return 1 / ans;
}

int main(){
    int base, n;
    cin >> base >> n;
    if(n >= 0) cout << pow(base, n);
    else cout << abs_pow(base, n) << endl;
}
