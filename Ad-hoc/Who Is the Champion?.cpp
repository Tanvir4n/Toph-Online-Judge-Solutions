#include<stdio.h>
int main(){

  int n,m;
	scanf("%d %d", &n, &m);
	if(n<m){
		printf("Runner up\nChampion\n");
	}
	else if(n>m){
		printf("Champion\nRunner up\n");
	}


    return 0;
}
