#include<bits/stdc++.h>

using namespace std;

int main(){

    int i,n,count=0;
    cin>>n;
    if(n == 0 || n == 1){
        count=1;
    }
    for(i=2; i<n; i++){
        if(n % i == 0){
            count++;
            break;
        }
		
    }
    if(count == 0){
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;

    return 0;
}
