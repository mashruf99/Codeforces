#include<bits/stdc++.h>
using namespace std;

void ok()
{
    int n, cnt = 0, m = 0, ans = 0;
    cin >> n;
    int a[n];
    bool k = true;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {

        if (k== true && a[i] >= a[i - 1])
        {
            cnt++;
        }
        else
        {
            k = false;
            break;
        }
    }
    m = n - cnt;
    if ((n-cnt)==1)
    {
        cout <<"0"<< endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
        {
            ans = max(a[i], ans);
        }
        cout << ans << endl;
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
