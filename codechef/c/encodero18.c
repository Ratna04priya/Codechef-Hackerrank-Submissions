// problem statement on : https://www.codechef.com/ENCO2018/problems/OLDFAR


#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll b[n][m];
        for(ll i=0;i<n;i++)
        {
            b[i][m-1]=a[i][m-1];
        }
        for(ll i=0;i<n;i++)
        {
            for(ll j=m-2;j>=0;j--)
            {
                b[i][j]=a[i][j]+b[i][j+1];
            }
        }
for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ans=max(ans,b[i][j]+b[i-1][j]);
                b[i][j]=max(b[i][j],b[i-1][j]+a[i][j]);
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;

