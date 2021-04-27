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
    cin>>n;
    
    multiset<ll> st;
    repf(i,0,n){
        cin>>x;
        // cout<<x<<endl;
        auto it = st.upper_bound(x);
        if(it!=st.end()){
//            while(*it==x && it!=st.end()) it = next(it,1);
            st.erase(it);
            st.insert(x);
        }else{
            st.insert(x);
        }
        
        // cout<<"set: ";
        // for(auto i: st) cout<<i<<" "; cout<<endl;
    }
    
    // for(auto i: st) cout<<i<<" "; cout<<endl;
    
    cout<<st.size()<<endl;
    
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


