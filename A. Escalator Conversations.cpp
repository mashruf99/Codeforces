#include<bits/stdc++.h>
using namespace std;




void ok() {
    int n, m,ij, k, I, c = 0;
    cin >> n >> m >> k >> I;
    int a[n];
    for (int j = 0; j < n; j++) {
        cin>>a[j];

    }
    for (int j = 0; j < n; j++) {
        for(ij =1; ij<m; ij++) {
            if(ij*k == (abs(I-a[j]))) {
                c++;
            }
        }

    }


    cout << c << endl;
}



int main() {

    int tcase;
    cin>>tcase;
    while(tcase--) {
        ok();
    }
    return 0;
}
