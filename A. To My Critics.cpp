#include<bits/stdc++.h>
using namespace std;

void ok() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b >= 10) {
        cout << "YES" << endl;
    }
    else if (b + c >= 10) {
       cout << "YES" << endl;
    }
    else if (a + c >= 10) {
        cout << "YES" << endl;
    }

    else{
        cout << "NO" << endl;
    }
}

int main() {
    int tcase;
    cin >> tcase;
    while (tcase--) {
        ok();
    }
    return 0;
}
