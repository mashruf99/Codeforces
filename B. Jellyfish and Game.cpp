//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ok()
{
    ll n,m,k,sum=0,t;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    if(a[0]<b[m-1])
    {
        t= a[0];
        a[0]=b[m-1];
        b[m-1]=t;
    }
    if(k%2==0)
    {
        sort(a,a+n);
        sort(b,b+m);
        if(b[0]<a[n-1])
        {
            t= b[0];
            b[0]=a[n-1];
            a[n-1]=t;
        }
    }
    for(ll i=0; i<n; i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
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

