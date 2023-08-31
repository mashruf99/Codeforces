//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ok()
{
    int a,b,c,i;
    cin>>a>>b>>c;
    string s;
    cin>>s;
    bool result = false;
    int check =b;
    int cnt =b;
    if(b == a){
        cout<<"YES"<<'\n';
    }
    else{
    for(i=0 ; i<c; i++){
            char k = s[i];
        if(k == '+'){
          check++;
           cnt++;
            if(check >= a){
                result = true;
            }
        }
        else{
            check --;
        }
    }
     if(cnt>=a){
        if(result)cout<<"YES"<<'\n';
        else cout<<"MAYBE"<<'\n';
     }
     else{
        cout<<"NO"<<'\n';
     }

    }


}




int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ok();
    }
    return 0;
}
