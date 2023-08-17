#include<bits/stdc++.h>
#define ll long long
using namespace std;


void ok(){

ll n;
cin>>n;
ll a[n],i,c=0,sum;
for(i=0; i<n; i++){
    cin>>a[i];
}
if(n==1){
    c=1;
}
else{
    sum=a[0];
    for(i=0; i<n; i++){
        sum &= a[i];
        if(sum==0){
            c++;
            if(i+1<n){
            sum=a[i+1];
            }
        }
    }
}
if(c==0){
    cout<<1<<endl;
}
else{
cout<<c<<endl;
}
}


int main(){

int tcase;
cin>>tcase;
while(tcase--){

    ok();

}


return 0;
}
