
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

    ll n;cin>>n;
    ll sm=0,mx=-1;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];sm+=a[i];mx=max(mx,a[i]);
    }

    cout<<max(2*mx,sm)<<endl;



    return 0;

}






