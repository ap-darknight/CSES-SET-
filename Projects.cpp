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
    
    mapL mp;
    vecL a,b,p;
    repf(i,0,n) cin>>x>>y>>m, a.pb(x), b.pb(++y), p.pb(m), mp[x] = 0, mp[y] = 0;
    
    ll coords = 0;
    for(auto &i: mp){
        i.second = coords++;
    }
    
    vector<vector<pll>> projects(coords);
    repf(i,0,n){
        projects[mp[b[i]]].pb({mp[a[i]], p[i]});
    }
    
    vecL dp(coords, 0);
    repf(i,0,coords){
        if(i>0) dp[i] = dp[i-1];
        for(auto j: projects[i]){
            dp[i] = max(dp[i], dp[j.first] + j.second);
        }
    }
    
    cout<<dp[coords-1]<<endl;
    
    
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



