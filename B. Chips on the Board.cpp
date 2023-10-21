//MASHRUF's work
#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long summ(long long a[], int n, long long m) {
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}



void ok()
{
int n;
cin>>n;
ll a[n],b[n],i,m1,m2,s1,s2;
for(i=0; i<n; i++){
    cin>>a[i];
}
for(i=0; i<n; i++){
    cin>>b[i];

}
m1 = *min_element(a,a+n);
m2 = *min_element(b, b+n);
s1= summ(a,n,m2);
s1= s1+m2*n;
s2= summ(b,n,m1);
s2= s2+m1*n;
if(s1<s2){
    cout<<s1<<endl;
}
else cout<<s2<<endl;
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
