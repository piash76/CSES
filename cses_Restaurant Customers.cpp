
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

    int n;cin>>n;

    vector< pair<int,int> > v;

    for(int i=0;i<n;i++)
    {
        int st,ed;cin>>st>>ed;
        v.push_back({st,1});
        v.push_back({ed+1,-1});

    }
    sort(v.begin(),v.end());

    int s=0,ans=0;
    for(auto it:v)
    {
        s+=it.second;
        ans=max(ans,s);

    }

    cout<<ans<<endl;



    return 0;

}






