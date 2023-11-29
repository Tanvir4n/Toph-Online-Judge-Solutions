#include<stdio.h>
int main(){

    int i,n,t;
    int a,b,sum=0;
    scanf("%d", &t);
    for(i=0; i<t; i++){
        scanf("%d %d", &a, &b);
        sum=(a+b)/2;
        if(sum%2 == 0){
            printf("Sadia will be happy.\n");
        }
        else
            printf("Oops!\n");

    }

    return 0;
}
