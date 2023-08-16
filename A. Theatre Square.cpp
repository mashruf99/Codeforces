//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    ll ans=ceil(a/c);
    ll d=ceil(b/c);
    cout<<ans*d;
    return 0;
}
