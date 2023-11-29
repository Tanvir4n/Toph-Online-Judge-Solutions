#include<stdio.h>
#include<string.h>

int main(){

	int l;
	char str[100];
	scanf("%s", str);
    l=strlen(str);
    char n[l];

    for (int i=0; i<l; i++) {
        n[i] = str[l-i-1];
    }
    if(strcmp(str, n) == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
