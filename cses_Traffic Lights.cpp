
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

    ll n,x;cin>>x>>n;

    set<ll> point;
    multiset<ll> dis;

    point.insert(0);
    point.insert(x);



    dis.insert(x);

    for(ll i=1;i<=n;i++)
    {
        ll p;cin>>p;

        auto itr=point.upper_bound(p);

       /// cout<<"ITR "<<*(itr)<<endl;

        auto itl=point.lower_bound(p);
        itl--;

       /// cout<<"ITl "<<*(itl)<<endl;

       auto it=dis.find(*(itr)-*(itl));
       dis.erase(it); ///prev dis

       point.insert(p);

       dis.insert(p-*(itl));  ///new dis
       dis.insert(*(itr)-p);  ///new dis

       auto s=dis.end();s--;

       cout<<*(s)<<" ";




    }

    return 0;

}

/*

8 3
6

*/




