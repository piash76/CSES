
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second


#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e15;
const int mod=1e9+7;


const int N=500005;
ll a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    map<ll,ll> m;
    ll ans=-1;
    ll n;cin>>n;
    ll lst=0;
    for(ll i=1;i<=n;i++)
    {
        ll x;cin>>x;
        auto it=m.find(x);

        if(it==m.end())
        {
            m[x]=i;
            ans=max(ans,i-lst);
        }
        else
        {
            lst=max(lst,m[x]);

            ans=max(ans,i-lst);

            m[x]=i;
        }


    }

    ///ans=max(ans,n-lst);

    cout<<ans<<endl;

    return 0;

}






