//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ok()
{
    int n;
    cin>>n;
    int a[n];
    vector<int>b;
    cin>>a[0];
    b.push_back(a[0]);
    for(int i=1; i<n; i++){
        cin>>a[i];
    }
    for(int i=1; i<n; i++){

        if(a[i-1]>a[i]){
            b.push_back(1);
            b.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
int len = b.size();
cout<<len<<'\n';
for(int i=0; i<len; i++){
    cout<<b[i]<<" ";
}
cout<<'\n';
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

