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
pair<ll,ll> a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;cin>>n;
    for(ll i=0;i<n;i++)
    {
        ll st,ed;cin>>st>>ed;
        a[i].first=ed;
        a[i].second=st;
    }
    sort(a,a+n);

    ll cnt=0,prev=-1;

    for(ll i=0;i<n;i++)
    {
        if(a[i].second>=prev)
        {
            cnt++;
            prev=a[i].first;
        }
    }
    cout<<cnt<<endl;

    return 0;

}


