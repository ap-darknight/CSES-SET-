//----------Coded By: ap_darknight-------------//
#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
#define mapL map<ll, ll>
#define mapC map<char,ll>
#define mapS map<string,ll>
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
//----------------------GRAPH LCA---------------------//
ll gcd(ll a, ll b){
    if(a==0) return b;
    else return gcd(b%a,  a);
}

void solve(){
    ll n,x,q,y,m,k,sum=0;
    cin>>n>>m;
    
    vecL arr;
    mapL mp, mp1;
    repf(i,0,n) cin>>x, arr.pb(x), mp[x] = i;
	
	while(m--){
		cin>>x>>y;
		mp[arr[x-1]] = y-1;
		mp[arr[y-1]] = x-1;
		ll tmp = arr[x-1];
		arr[x-1] = arr[y-1];
		arr[y-1] = tmp;
		
// 		for(auto i: arr) cout<<i<<" "; cout<<endl;
		
		ll curr = INT_MIN, cnt = 0;
		for(auto i: mp){
			if(i.ss<curr) cnt++;
			curr = i.ss; 
		}
		
		cout<<cnt + 1<<endl;
	}
	
	return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1,n,x,y,k,e;
//    cin>>t;
//    while(t--) 
	solve();

    return 0;
}


