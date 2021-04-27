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
    string s, t;
    cin>>s;
    cin>>t;
    
    n = s.length(), m = t.length();
    
    vector<vecL> dp(n+1, vecL(m+1, mod));
    dp[0][0] = 0;
    
    repf(i,0,n+1){
        repf(j,0,m+1){
            if(i) dp[i][j] = min(dp[i][j], dp[i-1][j] + 1);
            if(j) dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
            if(i&&j) dp[i][j] = min(dp[i][j], dp[i-1][j-1] + (s[i-1]!=t[j-1]));
        }
    }
    
    ll ans = dp[n][m];
    
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



