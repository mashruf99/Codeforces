#include<bits/stdc++.h>
using namespace std;

void ok(){

int m,i,n,k,f=-1,x;
cin>>n>>k>>x;

if(n%2==0){
    f=0;
}
else if(n%2 != 0){
    f=1;
}

if(f==1 && k==2 && x==1){
    cout<<"NO"<<endl;
}

else if(k==1 && x==1){
     cout<<"NO"<<endl;
}

else if(x==1){
    if(f==0){
        m=n/2;
        cout<<"YES"<<endl;
        cout<<m<<endl;
        for(i=0; i<m; i++){
            cout<<"2 ";
        }
        cout<<endl;
    }
    else{
        m=(n/2)-1;
        cout<<"YES"<<endl;
        cout<<m+1<<endl;
        for(i=0; i<m; i++){
            cout<<"2 ";
        }
        cout<<"3"<<endl;
    }
}
else if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
    for(i=0; i<n; i++){
        cout<<"1 ";
    }
    cout<<endl;
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
