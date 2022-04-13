
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
int a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,m;cin>>n>>m;

    multiset<ll> p;

    for(ll i=1;i<=n;i++)
    {
        ll x;cin>>x;
        p.insert(x);
    }

    for(ll i=1;i<=m;i++)
    {
        ll x;cin>>x;
        auto it=p.upper_bound(x);

        if(it==p.begin()) cout<<-1<<endl;
        else
        {
             it--;
             cout<<(*it)<<endl;

             p.erase(it);
        }



    }

    return 0;

}






