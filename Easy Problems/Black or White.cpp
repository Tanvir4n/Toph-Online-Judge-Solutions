#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1, str2;
    int sum=0;
    cin>>str1>>str2;
    sum=(str1[str1.size()-1]-'0')+(str2[str2.size()-1]-'0');
    if(sum%2 == 0){
        printf("Black\n");
    }
    else
        printf("White\n");
    return 0;
}
