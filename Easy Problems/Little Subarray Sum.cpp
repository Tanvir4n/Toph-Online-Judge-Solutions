#include <bits/stdc++.h>

using namespace std;

int main(){

    int i,n,a,b,x[1111],sum=0;
    cin>>n>>a>>b;
    for(i=0; i<n; i++){
        cin>>x[i];
    }
    for(i=a; i<=b; i++){
        sum += x[i];
    }
    cout<<sum<<endl;

    return 0;
}
