#include<bits/stdc++.h>
using namespace std;

void ok(){
int n,i,a,b,c=0;
cin>>n;
for(i=0; i<n; i++){
    cin>>a>>b;
    if(a>b){
        c++;
    }
}
cout<<c<<endl;


}


int main(){


int tcase;
cin>>tcase;
while(tcase--){

    ok();
}
return 0;
}
