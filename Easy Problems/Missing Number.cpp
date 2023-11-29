#include <stdio.h>
int main(){

    int a,b,c,d,total=0,missing;
    scanf("%d",&total);
    scanf("%d %d %d", &a, &b, &c);
    missing=total-(a+b+c);
    printf("%d\n",missing);

    return 0;
}
