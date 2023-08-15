//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long;

void ok()
{
    int n,i,m,cnt=0;
    cin>>n;
    vector<int>a;
    a.push_back(0);
    for (i=0  ; i<n  ; i++  )
    {
        cin>>m;
        a.push_back(m);
    }
    a.push_back(1440);
    for(i=1; i<=n+1; i++)
    {

        if(a[i]-a[i-1]>=240)
        {
            cnt+=2;
        }
        else if(a[i+1]-a[i]>=120)
        {
            cnt++;
        }
    }
    if(cnt<=1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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
