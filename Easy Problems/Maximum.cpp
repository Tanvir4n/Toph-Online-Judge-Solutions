#include <bits/stdc++.h>

using namespace std;

int main(){

    int i,t;
    int max=0;
    int num[1010];
    cin>>t;
    for(i=1; i<=t; i++){
        cin>>num[i];
    }
    num[0]=max;
    for(i=1; i<=t; i++){
        if(num[i]>max){
            max=num[i];
        }
    }

    cout<<max<<endl;

    return 0;
}
