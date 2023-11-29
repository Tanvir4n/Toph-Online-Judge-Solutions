#include<stdio.h>
int main(){

    int i,t;
    int a,b,c;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d %c %d", &a, &c, &b);
        if(c == '+'){
            printf("Case %d: %d\n", i,a+b);
        }
        else if(c == '-'){
            printf("Case %d: %d\n", i,a-b);
        }
        else if(c == '*'){
            printf("Case %d: %d\n", i,a*b);
        }
      
    }
    return 0;
}
