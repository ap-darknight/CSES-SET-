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
    
    set<ll> s1,s2;
    sum = n*(n+1)/2;
    
    if(sum&1){
        cout<<"NO"<<endl;
        return;
    }else{
        if(n&1){
            k = n;
            ll f = 0;
            s1.insert(n);
            repf(i,1,n/2 + 1){
                if(f) s1.insert(i), s1.insert(k-i), f = 0;
                else s2.insert(i), s2.insert(k-i), f = 1;
            }
        }else{
            k = n + 1;
            ll f = 1;
            repf(i,1,n/2 + 1){
                if(f) s1.insert(i), s1.insert(k-i), f = 0;
                else s2.insert(i), s2.insert(k-i), f = 1;
            }
        }
    }
    
    cout<<"YES"<<endl;
    cout<<s1.size()<<endl;
    for(auto i: s1) cout<<i<<" "; cout<<endl;
    cout<<s2.size()<<endl;
    for(auto i: s2) cout<<i<<" "; cout<<endl;
    
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


