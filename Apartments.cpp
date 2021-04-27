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
    cin>>n>>m>>k;
	
	vecL A, B;
	repf(i,0,n){
		cin>>x, A.pb(x);
	}
	sort(A.begin(), A.end());
	
	repf(i,0,m){
		cin>>x, B.pb(x);
	}
	sort(B.begin(), B.end());
	
	ll j = 0, cnt = 0;
	repf(i,0,n){
		if(j>=m) break;
		
		if(B[j]<A[i]-k) j++, i--;
		else if(B[j]>=A[i]-k and B[j]<=A[i]+k) j++, cnt++; 
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


