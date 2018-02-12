#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
    ios::sync_with_stdio(false);
    LL n, k;
    cin >> n >> k;
    for(int i=1; i<=k; ++i) {
        if(n%i != i-1) {
            cout <<"No" << endl;
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}