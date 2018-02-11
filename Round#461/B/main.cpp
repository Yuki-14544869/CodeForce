#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main() {
    int n;
    cin >> n;
    LL cnt = 0;
    for(int i=1; i<=n; ++i) {
        for(int j=i; j<=n; ++j) {
            int c = i^j;
            if(c>=j && c<=n && (i+j)>c)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}