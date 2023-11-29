#include<stdio.h>
int main(){

    int i,j,t,count;
    scanf("%d", &t);
    int arr[t];
    for(i=0; i<t; i++){
        scanf("%d",&arr[i]);
    }
    count=1;
    for(i=0; i<t-1; i++){
        if(arr[i] > arr[i+1]){
            count=0;
                break;
            }
    }
    if(count == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
