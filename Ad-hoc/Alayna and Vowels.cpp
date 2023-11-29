#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin>>str;
    int vowels = 0;
    for(int i=0; str[i]; i++){                                                                //can also do str[i] != '\0' in condition
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowels++;

           }
    }
    cout<<vowels<<endl;

    return 0;
}
