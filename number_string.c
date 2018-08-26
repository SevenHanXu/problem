/*************************************************************************
	> File Name: number_string.c
	> Author: 
	> Mail: 
	> Created Time: 日  8/26 14:35:49 2018
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(){
	int n;
	char a[100][5];
	char t1[10],t2[10],t[5];
	scanf("%d\n", &n);
	
	for(int i = 0; i < n; i++){
		scanf("%s", a[i]);
	}
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			strcpy(t1, a[i]);
			strcat(t1, a[j]);
			strcpy(t2, a[j]);
			strcat(t2, a[i]);
			if(strcmp(t1, t2) < 0){
				strcpy(t, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], t);
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%s",a[i]);
	}
	printf("\n");
	
}
