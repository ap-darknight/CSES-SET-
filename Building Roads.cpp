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

vector<vecL> roads(100001);
vecL visited(100001,-1);

void dfs(ll j){
    visited[j] = 1;
    for(auto i: roads[j]){
        if(visited[i]==-1) dfs(i);
    } 
}

void solve(){
    ll n,x,q,y,m,k,sum=0;
    cin>>n>>m;
    
    repf(i,0,m){
        cin>>x>>y;
        roads[x].pb(y), roads[y].pb(x);
    }
    
    vecL cc;
    ll cclen = 0; 
    repf(i,1,n+1){
    	if(visited[i]==-1) cc.pb(i), cclen++;
        for(auto j: roads[i]){
            if(visited[j]==-1) dfs(j);
        }
    }
    
    cout<<cclen-1<<endl;
    repf(i,1,cclen){
        cout<<cc[i-1]<<" "<<cc[i]<<endl;
    }
    
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



