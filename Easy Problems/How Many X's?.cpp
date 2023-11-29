#include <bits/stdc++.h>

using namespace std;

int main(){

    string str;
    cin>>str;
    int len=str.size();
    int count=0;
    for(int i=0; i<len; i++){
        if(str[i] == 'X'){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
