#include <stdio.h>

int main() {
    int x,y,i,j,count = 0;
    scanf("%d %d", &x, &y);
    int n[y];
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){

           scanf("%d", &n[j]);
           if(n[j] == 0)
           {
               count++;
           }
        }
    }
    printf("%d\n", count);

    return 0;
}
