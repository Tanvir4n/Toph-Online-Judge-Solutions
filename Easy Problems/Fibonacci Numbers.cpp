#include<stdio.h>
int main(){

	int i,n;
	int fib[50];
	fib[1]=1;
	fib[2]=1;

	for(i=3; i<50; i++){
		fib[i]=fib[i-1]+fib[i-2];       //formula: fib[n]=fib[n-1]+fib[n-2];

	}
	
	scanf("%d", &n);
	printf("%d\n", fib[n]);

    return 0;
}
