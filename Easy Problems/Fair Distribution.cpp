#include <stdio.h>
int main(){
    
	int x,y,rem;
    scanf("%d %d",&x,&y);
    rem=y%x;
    printf("%d\n",x-rem);

	return 0;
}
