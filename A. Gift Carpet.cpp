#include<bits/stdc++.h>
using namespace std;
#define ll long long

void ok()
{
    int row, col;
    cin >>row>> col;
    vector<string> li;

    for (int i=0; i<row; i++)
    {
        string input;
        cin >> input;
        li.push_back(input);
    }

    int count = 0, ind=0, counts =0;
    string p = "vika";


    for (int i=0; i<col; i++)
    {
        for (int j=0; j<row; j++)
        {
            string s = li[j];
            char c = s[i];
            if (c == p[ind])
            {
                ind++;
                counts++;
                break;
            }
        }
        if (counts == 4)
            break;
    }

    if (counts == 4)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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
