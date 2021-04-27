//----------Coded By: ap_darknight-------------//
#include <bits/stdc++.h>
#include<string>
using namespace std;
typedef long long ll;
#define mapL map<ll, ll>
#define mapC map<char,ll>
#define mapS map<string,ll>
#define pll pair<ll,ll>
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
    cin>>n>>k;
    
    vecL arr;
    repf(i,0,n) cin>>x, arr.pb(x);
    
    ll l = 0, r = 1e18, ans;
	while(l<=r){
		m = (l+r)/2;
		ll s = 0;
		repf(i,0,n){
			s+=(m/arr[i]);
			if(s>=k) break;	
		}
		
		if(s>=k) r = m-1, ans=m;
		else l = m+1;
	} 
    
    
    cout<<ans<<endl;
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


