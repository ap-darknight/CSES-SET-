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
    
    while(n--){
        cin>>x>>y;
        if(x>y){
            if(x&1){
                ll val = (x-1)*(x-1) + 1;
                cout<<val + (y-1)<<endl;
            }else{
                ll val = x*x;
                cout<<val - (y-1)<<endl;
            } 
        }else{
            if(y&1){
                ll val = y*y;
                cout<<val - (x-1)<<endl;
            }else{
                ll val = (y-1)*(y-1) + 1;
                cout<<val + (x-1)<<endl;
            }
        }
    }
    
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


