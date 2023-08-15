//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void ok()
{
    ll tcase,glo_min=INT_MAX,glo_min2=INT_MAX,ans=0,i;
    cin>>tcase;

    for ( int j=0 ; j<tcase  ; j++ )
    {

        ll n,a,lcl_min=INT_MAX,lcl_min2=INT_MAX;

        cin>>n;
        for(i=0; i<n; i++){
            cin>>a;

            if(a<=lcl_min)
            {
                lcl_min2=lcl_min;
                lcl_min = a;
            }
            else if(a<=lcl_min2)
            {
                lcl_min2=a;
            }

        }
        ans+=lcl_min2;
        glo_min  = min(lcl_min,glo_min);
        glo_min2 = min(lcl_min2,glo_min2);

    }

    ans=ans+glo_min;
    ans=ans-(glo_min2);
    cout<<ans<<endl;


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
