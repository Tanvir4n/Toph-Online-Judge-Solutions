#include<stdio.h>
int main(){

    int t;
    int fact=1;
    scanf("%d",&t);

    for(int i=1; i<=t; i++)
        fact=(fact*i)%10000;
            printf("%d\n",fact);

    return 0;

}
