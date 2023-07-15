#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define float double
#define rep(i,n) for(int i=0;i<n;i++) 
#define rrep(i,n) for(int i=n-1;i>=0;i--) 
#define repl(i,a,b) for(int i=a;i<b;i++)
const int N=1e5+10,mod=1e9+10;
#define fast ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

void solve(){
    ll n;
    cin>>n;
    ll a=n/2;
    if(n<3)
    {
        for(int i=0;i<n;i++)
        cout<<i+1<<" ";
        cout<<endl;
    }
    else
    {
        for(int i=2;i<n/2+2;i++)
    {
        cout<<i+1<<" ";
    }
    cout<<1<<" ";
    for(int i=n/2+3;i<=n;i++)
    cout<<i<<" ";
    cout<<2<<endl;
    }
    
}
int main(){
    fast
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}