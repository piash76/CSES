
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

    int n,x;cin>>n>>x;

    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    int i=0,j=n-1;

    int ans=0;
    while(i<j)
    {
        if(a[i]+a[j]<=x)
        {
            a[i]=-1,a[j]=-1;
            ans++;i++;j--;

        }
        else if(a[i]+a[j]<x) i++;
        else j--;
    }

    for(int i=0;i<n;i++) if(a[i]!=-1) ans++;

    cout<<ans<<endl;

    return 0;

}






