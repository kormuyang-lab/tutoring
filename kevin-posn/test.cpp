#include <iostream>

using namespace std;

int main() {
    int h; cin >> h;
    for (int i = h; i >= 1; i--) {
        for (int j = 1; j <= h; j++) {
            if (i == j) {
                cout << "/";
            }
            else {
                cout << " ";
            }
        }
        for (int j = 1; j <= h; j++) {
            if (i + j == h + 1) {
                cout << "\\";
            }
            else {
                cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
