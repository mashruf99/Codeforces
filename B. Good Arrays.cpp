#include<bits/stdc++.h>
using namespace std;

void ok()
{
    int n,i,cnt=0;
    long long sum=0;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            cnt++;
        }
            sum+=a[i];

    }

   if(sum>cnt+n && (n>1)){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ok();
    }
    return 0;
}
