#include<bits/stdc++.h>
using namespace std;
#define ll long long;

void ok()
{
    int n;
    cin>>n;

    int a[n],even[n],ev=0,od=0,odd[n],s1=0,s2=0;
    for (int i=0 ; i<n  ; i++  )
    {
        cin>>a[i];
    }
    for (int i=0  ; i<n ; i++  )
    {
        if(a[i]%2==0)
        {
            even[ev]=a[i];
            s1+=even[ev];
            ev++;
        }
        else
        {
            odd[od]=a[i];
            s2+=odd[od];
            od++;

        }
    }


    if((s1%2 == 0)&&(s2%2 == 0))
    {
        cout<<"YES"<<endl;
    }
    else if((s1%2 != 0)&&(s2%2 != 0))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
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
