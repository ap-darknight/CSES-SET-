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
    cin>>n>>m;
    
    vecL arr;
    vector<vecL> dp(100001,vecL(101,0));
    repf(i,0,n) cin>>x, arr.pb(x);
    
    if(arr[0]==0) repf(i,0,101) dp[0][i] = 1;
    else dp[0][arr[0]] = 1;
    
    repf(i,1,n){
        if(arr[i]==0){
            repf(j,1,m+1){
                dp[i][j]+=dp[i-1][j];
                if(j-1>0) dp[i][j]+=dp[i-1][j-1];
                if(j+1<=m) dp[i][j]+=dp[i-1][j+1];
                dp[i][j]%=mod;
            }
        }else{
            dp[i][arr[i]] += dp[i-1][arr[i]];
            if(arr[i]-1>0) dp[i][arr[i]] += dp[i-1][arr[i]-1];
            if(arr[i]+1<=m) dp[i][arr[i]] += dp[i-1][arr[i]+1];
            dp[i][arr[i]]%=mod;
        }
    }
    
    ll ans = 0;
    repf(i,1,m+1) ans+=dp[n-1][i], ans%=mod;
    
    cout<<ans%mod<<endl;
    
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



