//----------Coded By: ap_darknight-------------//
#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
#define mapL map<ll, ll>
#define mapC map<char,ll>
#define mapS map<string,ll>
#define pll pair<ll,ll>
#define tll tuple<ll,ll,ll>
#define ff first
#define ss second
#define vecL vector<ll>
#define vecC vector<char>
#define vecS vector<string>
#define pb push_back
#define repf(i,j,k) for(ll i=j; i<k; i++)
#define repb(i,j,k) for(ll i=j; i>k; i--)
#define mod 1000000007
#define bin_mod 4294967296
#define bit 32
#define BLK 200

void solve(){
    ll n,x,q,y,m,k,sum=0;
    cin>>n>>k;
    
    vector<ll> cst, pg;
    repf(i,0,n){
        cin>>x, cst.pb(x);
    }
    repf(i,0,n){
        cin>>x, pg.pb(x);
    }
    
    vecL dp(k+1, -1);
    dp[0] = 0;
    
    ll ans = 0;
    repf(i,0,n){
        for(ll j=k; j>=cst[i]; j--){
            if(dp[j - cst[i]]==-1) continue;
            dp[j] = max(dp[j], dp[j - cst[i]] + pg[i]);
            ans = max(dp[j], ans);
        }
    }
    
    // for(auto i: dp) cout<<i<<" "; cout<<endl;
    cout<<ans<<endl;
    
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,n,x,y,k,e;
    // cin>>t;
    // while(t--) 
    solve();

    return 0;
}


