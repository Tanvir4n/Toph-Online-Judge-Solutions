#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,t;
    cin>>t;
    string pi="3.141592653589793238462643383279502884197169399375105820974944592307816406286";
	while(t--){
        cin>>n;
        cout<<pi[n+1]<<endl;
    }
    return 0;
}
