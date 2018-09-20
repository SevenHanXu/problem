/*************************************************************************
	> File Name: mul_plus.cpp
	> Author: 
	> Mail: 
	> Created Time: 四  9/20 10:59:34 2018
 ************************************************************************/

#include<iostream>
using namespace std;
int mul[500] = {0};

void mul_plus(int n){
    mul[0] = mul[1] = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= mul[0]; j++){
            mul[j] *= 10;
        }
        for(int j = 1; j <= mul[0]; j++){
            if(mul[j] < 10) continue;
            mul[j + 1] += mul[j] / 10;
            mul[j] %= 10;
            mul[0] += (mul[0] == j);
        }
    }
}

int main(){
    int n;
    cin >> n;
    mul_plus(n);
    for(int i = mul[0]; i > 0; i--){
        cout << mul[i];
    }
    cout << endl;
    return 0;
}
