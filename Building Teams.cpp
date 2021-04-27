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
ll f = 0;

void bfs(ll j){
    queue<ll> q;
    q.push(j);
    ll dist = 1;
    visited[j] = 1;
    parent[j] = 1;
    
    while(!q.empty()){
        ll frt = q.front();
        q.pop();
        
        for(auto child: roads[frt]){
            if(visited[child]==-1){ 
                q.push(child), visited[child]=1;
                if(parent[frt]==1) parent[child]=2;
                else parent[child] = 1;
            }else{
            	if(parent[child] == parent[frt]) f=1;
			}
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
    
    repf(i,1,n+1){
        if(visited[i]==-1) bfs(i);
    } 
    
    if(f) cout<<"IMPOSSIBLE"<<endl;
    else repf(i,1,n+1) cout<<parent[i]<<" "; cout<<endl;
    
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



