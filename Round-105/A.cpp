#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;



void solve()
{

    int n;
    cin>>n;
    int a[n];
    int total=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        total+=a[i];
    }
    if(total % n)
    {
        no;
        return;
    }

    int each=total/n;
    for(int i=0; i<n; i++)
    {
        if(abs(a[i]-each)%2)
        {
            no;
            return;
        }
    }
    yes;
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

