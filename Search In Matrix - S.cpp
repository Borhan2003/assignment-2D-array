#include <iostream>
using namespace std;

int main() {
    int r, c, i, j, x;
    cin >> r >> c;

    int a[r][c];
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    int f = 0;
    cin >> x;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] == x) { f = 1; }
        }
    }
    if (f == 1) cout << "will not take number";
    else cout << "will take number";

    return 0;
}
