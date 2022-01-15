
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

    set<int> s;
    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        s.insert(x);
    }

    cout<<s.size()<<endl;
    return 0;

}





