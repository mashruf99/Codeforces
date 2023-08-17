#include <iostream>
#include <vector>
using namespace std;

void ok() {
    char a[65];
    vector<char> b;
    for (int i = 0; i < 64; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 64; i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            b.push_back(a[i]);
        }
    }
    for (size_t i = 0; i < b.size(); i++) {
        cout << b[i];
    }
    cout << endl;
}

int main() {
    int tcase;
    cin >> tcase;
    while (tcase--) {
        ok();
    }
    return 0;
}

