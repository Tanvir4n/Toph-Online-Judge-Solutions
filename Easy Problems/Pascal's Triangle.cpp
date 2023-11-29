#include<stdio.h>
#include<math.h>
int main(){

    int n,ans=0;
    scanf("%d", &n);
    ans=pow(2,n-1);
    printf("%d", ans);

    return 0;
}

/*
                    1                       1  =2^0
                1       1                   2  =2^1
            1       2       1               4  =2^2
        1       3       3      1            8  =2^3
    1       4       6      4      1         16 =2^4
1       5      10      10      5      1     32 =2^5


2^element of a row-1
*/
