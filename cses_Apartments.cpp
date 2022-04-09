
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
int sz[N],a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,m,k;cin>>n>>m>>k;

    for(int i=0;i<n;i++) cin>>sz[i];

    for(int i=0;i<m;i++) { cin>>a[i]; }

    sort(a,a+m);sort(sz,sz+n);

    int ans=0;

    int i=0,j=0;

    while(i<n and j<m)
    {
        if(abs(sz[i]-a[j])<=k)
        {
            i++;j++;ans++;
        }
        else if(sz[i]<a[j]) i++;
        else j++;
    }



    cout<<ans<<endl;




    return 0;

}






