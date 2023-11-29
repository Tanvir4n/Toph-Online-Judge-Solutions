#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main() {

    int i,n,sum=0;
    scanf("%d", &n);
        for(i=1; i<=n; i++){
            sum=sum+pow(i,2);
        }
        printf("%d", sum);

    return 0;
}
