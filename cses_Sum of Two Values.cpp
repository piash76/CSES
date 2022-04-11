
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
pair<int,int> a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n,sm;cin>>n>>sm;
    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    sort(a,a+n);

    ll id1=-1,id2=-1,i=0,j=n-1;

    while(i<j)
    {
        if(a[i].first+a[j].first==sm)
        {
            id1=a[i].second,id2=a[j].second;break;
        }
        else if((a[i].first+a[j].first)>sm) j--;
        else i++;


    }

    if(id1!=-1) cout<<id1+1<<" "<<id2+1<<endl;
    else cout<<"IMPOSSIBLE"<<endl;

    return 0;

}






