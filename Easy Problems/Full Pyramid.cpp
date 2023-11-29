#include<stdio.h>

int main(){

	int n,i,j,k;
  scanf("%d", &n);
	for(int i=1; i<=n; i++){          //number of rows;
	  for(int j=n; j>i; j--){         //left side space;
        printf(" ");
        }

        for(int k=1; k<=i; k++){     //print * middle & right side space;
            if(k == i){
                printf("*");
            }
            else{
				printf("* ");
            }

        }
                printf("\n");
    }

    return 0;
}
