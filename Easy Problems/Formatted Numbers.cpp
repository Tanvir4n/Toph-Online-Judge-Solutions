#include<stdio.h>
#include<string.h>
int main(){
    int i,count=0;
    char str[200];
    scanf("%s",&str);
    int len=strlen(str);;
    for(i=0; i<len; i++){
        if((len-i)%3==0 && i>0){
            printf(",");
        }
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}

/*
8-0 = 8 %3 = 1(false) print number;
8-1 = 7 %3 = 1(false) print number;
8-2 = 6 %3 = 1(true) print',';
*/
