/*************************************************************************
	> File Name: tree_height.c
	> Author: 
	> Mail: 
	> Created Time: 日  8/26 15:14:31 2018
 ************************************************************************/

#include <stdio.h>

int main(){
	
	int n, father, child, ans = 1;
	int heigh[1000] = {0};
	int child_num[1000] = {0};
	scanf("%d", &n);
	heigh[0] = 1;
	for(int i = 0; i < n - 1; i++){
		scanf("%d %d", &father, &child);
		if(heigh[father] == 0 || child_num[father] == 2) continue;
		child_num[father]++;
		heigh[child] = heigh[father] + 1;
		if(heigh[child] > ans){
			ans = heigh[child];
		}
	}
	printf("%d\n", ans);
	return 0;
}
