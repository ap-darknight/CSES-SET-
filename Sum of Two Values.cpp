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
    ll n,x,q,y,k,sum=0;
    cin>>n>>k;
    
    vector<pair<ll,ll>> arr;
    repf(i,0,n) cin>>x, arr.pb({x,i+1});
	sort(arr.begin(), arr.end());
	
	repf(i,0,n){
		ll l = i+1, r = n-1, m, x = k - arr[i].ff;
//		cout<<"#"<<x<<endl;
		while(l<=r){
			m = (l+r)/2;
			if(arr[m].ff==x){
				cout<<arr[i].ss<<" "<<arr[m].ss;
				return;
			}
			
			if(arr[m].ff>x) r=m-1;
			else l = m+1;
		}
	}
	
	cout<<"IMPOSSIBLE"<<endl;
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


//10
//1 20
//2 19
//3 18
//4 17
//5 16
//6 15
//7 14
//8 13
//9 12
//10 11


