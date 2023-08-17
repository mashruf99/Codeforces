#include<bits/stdc++.h>
using namespace std;

void ok() {
    int n,k,i,c=0,m=0,second,first,temp;
    cin>>n>>k;

    if(k>30) {
        cout<<0<<endl;
    } else {
        for(i=1; i<=n; i++){
            first =i;
            second=n;
            bool ok = true;
            for(int j=1 ; j<=k-1; j++) {
                temp = second- first;
                if(first<=second and first>-1) {
                    second = first;
                    first = temp;
                    continue;
                } else {
                    ok = false;
                    break;
                }

            }
            if(ok) {
                c++;
            }

        }
        cout<<c<<endl;
    }
}



int main() {
    int t;
    cin>>t;
    while(t--) {
        ok();
    }
    return 0;
}
