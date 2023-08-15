//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long;

void ok()
{
    int n,i;
    cin>>n;
    string s;
    cin>>s;

    set<string> seet;
    for(i=0; i<n-1; i++)
    {
        string temp;
        temp.push_back(s[i]);
        temp.push_back(s[i+1]);
        seet.insert(temp);
        clrs
    }
    cout<<seet.size()<<endl;

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
