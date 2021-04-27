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
    cin>>n;
    
    vecL a;
    repf(i,1,n+1) a.pb(i), sum+=i;
    
    if(sum&1){
        cout<<0<<endl;
        return;
    }
    
    sum/=2;
    vecL dp(sum+1, 0);
    dp[0] = 1;
    
    repf(i,0,n-1){
        for(ll j=sum; j>=a[i]; j--){
            if((j - a[i])>=0) dp[j] += dp[j-a[i]], dp[j]%=mod;
        }
    }
    
    // for(auto i: dp) cout<<i<<" "; cout<<endl;
    cout<<(dp[sum])%mod<<endl;
    
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



