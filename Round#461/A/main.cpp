#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(y==0 || y==1&&x>0) {
        cout << "No" << endl;
        return 0;
    }
    y = y - 1;
    if(x>=y) {
        int delta = x - y;
        if(delta%2 == 0) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}