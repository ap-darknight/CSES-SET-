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
    cin>>n>>k;
    
    vector<pll> arr;
    repf(i,0,n) cin>>x>>y, arr.pb({y,x});
    sort(arr.begin(), arr.end());
    
    multiset<ll> mst;
    repf(i,0,k) mst.insert(0);
    
    ll cnt = 0, end;
    for(auto i: arr){
        auto it = mst.upper_bound(i.ss);
        if(it == mst.begin()) continue;
        mst.erase(--it);
        mst.insert(i.ff);
        cnt++;
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


