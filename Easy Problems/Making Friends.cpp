#include<stdio.h>
int main(){

    int n,ans=0;
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            ans++;

        }
    }
    ans--;
    printf("%d\n", ans);
    return 0;
}
/*
divisor of 6 is 1 2 3 and 6 but 6 is Byang himself.
so Byang friend's roll number is 1 2 3 total 3 person;
*/
