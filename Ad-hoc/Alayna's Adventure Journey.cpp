#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    int maxGroupSize = 0;
    int groupSize;
    for (int i=0; i<n; i++) {
        cin >> groupSize;
        if (groupSize > maxGroupSize) {
            maxGroupSize = groupSize;
        }
    }

    cout << maxGroupSize << endl;

    return 0;
}
