#include <bits/stdc++.h>
using namespace std;

#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
//#define neg cout << -1 << endl;
#define pb push_back
int mod = 1e9 + 7;

const int INF = 1e18;



void solve()
{
    int n;
    cin>>n;
    int a[n];
    int p, q;
    cin>>p>>q;
    int pq=p+q;
    vector<int>pos, neg;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            neg.pb(-a[i]);
        }
        else
        {
            pos.pb(a[i]);
        }
    }
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end(), greater<int>());

    if(neg.size()==0)
    {
        pq=min(n-2, pq);
        pq=max(pq, (int)0);
        int total=pos[0];
        int i=1;
        while(pq--)
        {
            total+=pos[i++];
        }
        cout<<total-pos[n-1]<<endl;
        return;
    }
    if(pos.size()==0)
    {
        pq=min(n-2, pq);
        pq=max(pq, (int)0);
        int total=neg[0];
        int i=1;
        while(pq--)
        {
            total+=neg[i++];
        }
        cout<<total-neg[n-1]<<endl;
        return;
    }
    int pp=pos[0], nn=neg[0];
    int l=1, r=1;
    while(pq--)
    {
        int v1=0, v2=0;
        if(l<neg.size())
        {
            v1=neg[l];
        }
        if(r<pos.size())
        {
            v2=pos[r];
        }

        if(v1>v2)
        {
            nn+=v1;
            l++;
        }
        else
        {
            pp+=v2;
            r++;
        }
        if(l==neg.size() && r==pos.size())
        {
            break;
        }
    }

    cout<<pp+nn<<endl;

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

