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
    
    vecL dp(n+1, 0);
    dp[0] = 1;
    repf(i,1,n+1){
        if(i<=1) dp[i]+=dp[i-1];
        else if(i<=2) dp[i] += dp[i-1]+dp[i-2];
        else if(i<=3) dp[i] += dp[i-1]+dp[i-2]+dp[i-3];
        else if(i<=4) dp[i] += dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4];
        else if(i<=5) dp[i] += dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5];
        else dp[i] += dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6];
        
        dp[i]%=mod;
    }
    cout<<dp[n]%1000000007<<endl;
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


