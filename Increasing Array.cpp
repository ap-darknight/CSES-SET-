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
    
    vecL arr;
    repf(i,0,n){
        cin>>x, arr.pb(x);
    }
    
    ll ans = 0, max = arr[0];
    repf(i,1,n){
        if(arr[i]<arr[i-1]) ans+=(arr[i-1]-arr[i]), arr[i] = arr[i-1];
    }
    
    cout<<ans<<endl;
    
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


