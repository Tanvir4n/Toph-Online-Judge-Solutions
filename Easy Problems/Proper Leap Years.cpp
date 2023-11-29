#include<stdio.h>
int main(){
    
    int year;
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0){
        printf("Yes\n");
    }
    else{
        printf("No\n");

    }
    return 0;
}
/*
leap year
divisible by 4,100,400
divisible by 4 but not divisible by 100
i) 1200 1600 2000 2400 by 400
ii) 2012 2016 2020 etc by 4
iii) 2100 2200 2300 2500 not leap year, difference should be 400

not leap year
not divisible by 4
divisible by 4 and 100 but not divisible by 400
*/
