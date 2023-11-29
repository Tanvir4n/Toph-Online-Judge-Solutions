#include<stdio.h>
int main(){

    int m,h;
    double angle=0;
    scanf("%d %d", &h,&m);
    angle=(5.5*m)-(30*h);
    if(angle<0){
        angle*=(-1);
    }

    if(angle<=180){
    printf("%lf\n", angle);
        }

    else if(angle>180){
        printf("%lf\n", 360-angle);
    }

    return 0;
}
