//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ok()
{
    int n;
    bool con1=false,con2= false;
    cin>>n;
    vector<int>a(n);
    int i,chk=0;
    for ( i=0 ;i<n  ;i++  ){
        cin>>a[i];
    }
    map<int,int>b;
    for(auto it: a)
    {
        b[it]++;
    }
    vector<int>c,d;
    for(auto it: b)
    {
        if(it.second>=2){
            c.push_back(it.first);
        }

    }
    if(c.size()<2)
    {
        cout<<-1<<endl;
    }
    else{
        for(auto it: a)
        {
            if(it == c[0])
            {
                d.push_back(con1?2:1);
                con1 = true;
            }
            else if(it == c[1])
            {
                d.push_back(con1?3:1);
                con2 = true;
            }
            else{
                d.push_back(1);
            }
        }
        for(auto  it:d)
        {
            if(it>0)
            {
                cout<<it<<" ";

            }

        }

    }
    cout<<endl;

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
