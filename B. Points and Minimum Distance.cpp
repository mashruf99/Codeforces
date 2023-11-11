//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ok() {
    int n, i,x,j,sum=0;
    cin >> n;
    vector<int> a, b;

    for (i = 0; i < 2 * n; i++) {
           cin >> x;
            a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(i=n; i<2*n; i++)
    {
        b.push_back(a[i]);
    }
    reverse(b.begin(),b.end());

    for (i = 1; i < n; i++) {
        sum+=abs(a[i-1]-a[i]);
        sum+=abs(b[i-1]-b[i]);
    }

    cout<<sum<<endl;
    for (i = 0; i < n; i++) {

        cout<<a[i]<<" "<<b[i]<<endl;
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
