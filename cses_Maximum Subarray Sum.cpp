
///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
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

    ll n;cin>>n;
    for(ll i=0;i<n;i++) cin>>a[i];

    ///non empty sub array

    ll ans=0,sum=0,ans2=LLONG_MIN;

    for(ll i=0;i<n;i++)
    {

        sum+=a[i];

        ans=max(ans,sum);

        if(sum<0) sum=0;

        ans2=max(ans2,a[i]);
    }

    if(ans!=0) cout<<ans<<endl;
    else cout<<ans2<<endl;

    return 0;

}





