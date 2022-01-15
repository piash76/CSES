
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
ll a[N],ans[N];


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;cin>>n;

    for(int i=1;i<=n;i++) cin>>a[i];

    stack< pair<int,int> > st;

    st.push({1,a[1]});  ///idx, val
    ans[1]=0;

    for(int i=2;i<=n;i++)
    {
        ///if the next value is smaller than previous no need of previous smaller values

        while(!st.empty() and st.top().second>=a[i])
        {
            ///cout<<"A{I} "<<a[i]<<endl;
            st.pop();
        }
       /// cout<<endl;

        ///if(st.empty()) cout<<"{I} "<<i<<endl;


        ///if found
        if(!st.empty()) ans[i]=st.top().first;
        else ans[i]=0;

        st.push({i,a[i]});



    }

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;

    return 0;

}





