#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int l = 0, h = 0;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        h = max(h, a[i]);
        l = min(l, a[i]);
    }
    for (int i = h; i >= 1; i--) {
        for (int j = 0; j < n; j++) {
            for (int k = 1; k <= abs(a[j]); k++) {
                if (i == k) {
                    cout << '/';
                }
                else {
                    cout << ' ';
                }
            }
            for (int k = 1; k <= abs(a[j]); k++) {
                if (i + k == a[j] + 1) {
                    cout << '\\';
                }
                else {
                    cout << ' ';
                }
            }
        }
        cout << '\n';
    }
    for (int i = -1; i >= l; i--) {
        for (int j = 0; j < n; j++) {
            for (int k = 1; k <= abs(a[j]); k++) {
                if (-i == k) {
                    cout << '/';
                }
                else {
                    cout << ' ';
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
