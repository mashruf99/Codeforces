#include<bits/stdc++.h>
using namespace std;

void ok(){
int i;
string s;
cin>>s;
set<char>st;
for(i=0; i<s.size(); i++){
    if(s[i]==s[i+1])i++;
    else st.insert(s[i]);
}
for(auto it:st)cout<<it;
cout<<endl;
}

int main(){

int t;
cin>>t;
while(t--){
    ok();
}
return 0;
}
