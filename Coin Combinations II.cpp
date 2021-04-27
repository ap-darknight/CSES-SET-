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
    
    vecL arr;
    repf(i,0,n) cin>>x, arr.pb(x);
    sort(arr.begin(), arr.end());
    
    vecL dp(k+1, 0);
    dp[0] = 1;
        
    repf(j,0,n){
        repf(i,1,k+1){
            if((i - arr[j])>=0) dp[i]+=dp[i-arr[j]], dp[i]%=mod;
        }
    }
    
    cout<<dp[k]%mod<<endl;
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


