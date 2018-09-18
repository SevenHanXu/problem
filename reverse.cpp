/*************************************************************************
	> File Name: reverse.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  9/18 17:14:06 2018
 ************************************************************************/

#include<iostream>
#include <stack>
#include <list>
using namespace std;

int main(){
    list <int> l;
    stack <int> s;
    int n, value;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> value;
        l.push_back(value);
        s.push(value);
    }

    while(!s.empty()){
        int ans = s.top();
        cout << ans << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}
