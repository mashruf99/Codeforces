#include<bits/stdc++.h>
using namespace std;


int ok() {

    int a,b,k;
    cin>>a>>b>>k;
    int x,y,m[k],n[k],i,o=-1,p=-1,l=0;
    cin>>x>>y;
    if((x+y)%2==0) {
        o=1;
    } else {
        o=0;
    }
    for(i=0; i<k; i++) {
        cin>>m[i]>>n[i];
        if((m[i]+n[i])%2==0) {
            p=1;
        } else {
            p=0;
        }
        if(o==p) {
            l++;
        }
        else{
            l=l+0;
        }
    }
  if(l>=1) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
}



int main() {

    int tcase;
    cin>>tcase;
    while(tcase--) {
        ok();
    }
    return 0;
}
