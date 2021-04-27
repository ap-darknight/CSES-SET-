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
    
    vector<vecL> arr(n,vecL(n)), dp(n,vecL(n,0));
    repf(i,0,n){
        repf(j,0,n){
            char ch;
            cin>>ch;
            if(ch=='.') arr[i][j] = 1;
            else arr[i][j] = -1;
        }
    }
    
    if(arr[0][0] == -1 || arr[n-1][n-1] == -1){
        cout<<0<<endl;
        return;
    }
    
    for(ll i=n-1; i>=0; i--){
        for(ll j=n-1; j>=0; j--){
            if(arr[j][i]==-1) continue;
            
            if(i==(n-1) && j==(n-1)) dp[j][i] = 1;
            else if(i==n-1){
                if(arr[j+1][i]!=-1) dp[j][i] += dp[j+1][i];  
            }else if(j==n-1){
                if(arr[j][i+1]!=-1) dp[j][i] += dp[j][i+1];  
            }else{
                if(arr[j+1][i]==-1) dp[j][i] += dp[j][i+1];
                else if(arr[j][i+1]==-1) dp[j][i] += dp[j+1][i];
                else dp[j][i] += dp[j+1][i] + dp[j][i+1];
            }
            
            dp[j][i]%=mod;
        }
        
    }
    
    // cout<<"Arr: \n";
    // for(auto i: arr){
    //     for(auto j: i) cout<<j<<" "; cout<<endl;
    // }
    // cout<<endl;
    
    // cout<<"Dp: \n";
    // for(auto i: dp){
    //     for(auto j: i) cout<<j<<" "; cout<<endl;
    // }
    // cout<<endl;
    
    cout<<dp[0][0]%mod<<endl;
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


