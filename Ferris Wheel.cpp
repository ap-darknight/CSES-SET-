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
    ll n,x,q,y,k,m,sum=0;
    cin>>n>>k;
	
	vecL A;
	repf(i,0,n){
		cin>>x, A.pb(x);
	}
	sort(A.begin(), A.end());
	
	ll l = 0, r = n-1, cnt = 0;
	while(l<=r){
		if(A[l] + A[r]<=k) l++, r--, cnt++;
		else{
			cnt++; r--;
		}
	} 
	 
	cout<<cnt<<endl;
    return ;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
//    ll t=1,n,x,y,k,e;
//    cin>>t;
//    while(t--) 
	solve();

    return 0;
}


