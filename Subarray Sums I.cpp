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
ll gcd(ll a, ll b){
    if(a==0) return b;
    else return gcd(b%a,  a);
}

void solve(){
    ll n,x,q,y,m,k,sum=0;
    cin>>n>>k;
    
    vecL arr, pre(n,0);
    repf(i,0,n) cin>>x, arr.pb(x);
    pre[0] = arr[0];
    repf(i,1,n) pre[i] = pre[i-1] + arr[i];
    
    ll l = 0, r = 0, cnt = 0;
    while(l<=r && r<n){
        ll s = pre[r] - pre[l] + arr[l];
        if(s==k) cnt++, r++;
        else if(s>k) l++;
        else r++;
    }
    
    cout<<cnt<<endl;
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


