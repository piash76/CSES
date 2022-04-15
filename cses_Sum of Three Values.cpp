
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

    ll n,x;cin>>n>>x;

    for(ll i=0;i<n;i++)
    {
        ll val;cin>>val;
        a[i].first=val;
        a[i].second=i;
    }
    sort(a,a+n);

    ll id1=-1,id2=-1,id3=-1;




    for(ll k=0;k<n;k++)
    {
        ll sm=a[k].first;

        bool f=false;
        ll i=k+1,j=n-1;

        while(i<j)
        {
            if(a[i].first+a[j].first==x-sm)
            {
                id1=a[i].second,id2=a[j].second,id3=a[k].second;
                f=true;break;

            }
            else if((a[i].first+a[j].first)>x-sm) j--;
            else i++;

        }
        if(f) break;
    }



    if(id1!=-1) cout<<id1+1<<" "<<id2+1<<" "<<id3+1<<endl;
    else cout<<"IMPOSSIBLE"<<endl;



    return 0;

}






