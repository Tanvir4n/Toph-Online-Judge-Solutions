#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){

    //cin>>n;
    if(n == 0 || n == 1)
        //isPrime = false;
        return false;

    if(n == 2)
        //isPrime = false;
        return true;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int num;
    while(cin >> num){
        if(isPrime(num))
            cout << "NO PUNISHMENT" << endl;
        else
            for (int i=0; i<num; i++)
                cout << "I DID NOT DO THE ASSIGNMENT."<< endl;
    }

    return 0;
}
