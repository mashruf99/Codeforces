#include<bits/stdc++.h>
using namespace std;

void ok(){

 int n,k,l,ans,sum=0;
 cin>>n;
 for(int i=0; i<n; i++){
    cin>>k>>l;
    if(k<11 && sum < l){
        sum = l;
        ans = i+1;
    }
 }
cout<<ans<<endl;
}

int main(){

int tcase;
cin>>tcase;

while(tcase--){

    ok();


}

return 0;
}

