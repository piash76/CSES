
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
    for(ll i=1;i<=n;i++)
    {
        ll x;cin>>x;
        a[i].first=x;a[i].second=i;
    }
    sort(a+1,a+1+n);
    ll s=1;

    for(ll i=2;i<=n;i++)
    {
        ///cout<<"A[i] "<<a[i].second<<" "<<a[i-1].second<<endl;
        if(a[i].second<a[i-1].second) s++;
    }

    cout<<s<<endl;

    return 0;

}

/*

6
4 5 1 2 3 6

*/




