#include <bits/stdc++.h>

using namespace std;

#define int long long
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define pi acos(-1)
#define pb push_back
#define nl "\n"

void solution(){

    int n;
    cin>>n;
    int chocolates=0;
    int problemsSolved=0;

    for(int i=1; i<=n; i++){
        problemsSolved += i;
        chocolates = problemsSolved;
    }
    cout<<chocolates<<nl;

}

signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solution();

    return 0;
}
