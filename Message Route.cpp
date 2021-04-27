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

vecL roads[100001];
vecL visited(100001,-1);
vecL parent(100001,-1);

// void dfs(ll j, string s, ll l, ll n){
//     if(j==n){
//         if(len>l) len=l, res=s;
//         f=1;
//         return;
//     }
    
//     visited[j] = 1;
//     for(auto i: roads[j]){
//         if(visited[i]==-1) dfs(i);
//     } 
// }



void bfs(ll j, ll n){
    queue<ll> q;
    q.push(j);
    ll dist = 0;
    visited[j] = 1;
    
    while(!q.empty()){
        // dist++;
        ll frt = q.front();
        q.pop();
        
        if(frt==n) return;
        
        for(auto child: roads[frt]){
            if(visited[child]==-1) q.push(child), parent[child] = frt, visited[child]=1;
        }
    }
    
}

void solve(){
    ll n,x,q,y,m,k,sum=0;
    cin>>n>>m;
    
    repf(i,0,m){
        cin>>x>>y;
        roads[x].pb(y), roads[y].pb(x);
    }
    
    // dfs(1, "", 0, n);
    bfs(1,n);
    
    if(parent[n]!=-1){
        vecL res;
        // res.pb(n);
        while(n!=-1){
            res.pb(n);
            n = parent[n];
        }
        reverse(begin(res),end(res));
        cout<<res.size()<<endl;
        for(auto i: res) cout<<i<<" "; cout<<endl;
        
    }else cout<<"IMPOSSIBLE"<<endl;
    
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



