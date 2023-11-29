#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<time.h>
#include<assert.h>
#include<limits.h>
#include<stdbool.h>

int main(){

	double n,area=0;
	scanf("%lf", &n);
	area= 3.141592653589793*(n*n);
    printf("%.10f", area);

    return 0;
}
