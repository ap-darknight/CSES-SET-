#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ba back
#define ppb pop_back
#define pqb   priority_queue<long long int>
#define eb emplace_back
#define eps 1e-6
#define vll vector<long long int>
#define pqs   priority_queue<int,vll,greater<long long int> >
#define sz(x) (int((x.size())))
#define all(x) (x).begin(),(x).end()
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
 
using namespace std;
typedef long long int ll;
//-------------------------------------Mod_operations------------------------------------------
const ll M = 1e9 + 7;
const ll N = 1e5 + 5;
const ll inf = 2e18;
ll mod(ll x){   return (x%M);}
ll mod_minus(ll a, ll b){ ll ans= (mod(a)-mod(b)); if(ans<0) ans=mod(ans+M); return ans;}
ll mod_mul(ll a,ll b){  return mod(mod(a)*mod(b));}
ll mod_add(ll a,ll b){ return mod(mod(a)+mod(b));}
ll power(ll a,ll n){  if(n==0) return 1;  else if(n==1) return a;  ll R=power(a,n/2)%M;  if(n%2==0) {  return mod(mod_mul(R,R)); }   else { return mod(mod_mul(mod_mul(R,a),mod(R)));  }}
 
ll mod_div(ll a,ll b){// only if M is prime
    ll ans=mod(a);
    ll b1=power(b,M-2);
     ans= mod(mod_mul(ans,b1));
     return ans;
}
 
ll fact_mod(ll n){
    vll fact(n+1);
    fact[0]=1;
    for(ll i=1;i<n+1;i++){
        fact[i]=mod_mul(fact[i-1],i);
    }
    return fact[n];
}
ll nCr_mod(ll n , ll r){
    return mod( mod_mul(mod_mul(fact_mod(n),mod(fact_mod(power(r,M-2))) ), 
                                       mod(power(fact_mod(n-r),M-2))   )   );
}
 
//--------------------------------main code ----------------------------------
int main(){
    ll a,b;
    cin>>a>>b;
    ll i,j;
    vector<vll> dp(a+1,vll(b+1,INT_MAX));
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=b;j++)
        {
            if(i==j)
            dp[i][j]=0;
            else
            {
                for(ll k=1; k<=i-1; k++)
                dp[i][j]=min(dp[i][j],1+dp[k][j]+dp[i-k][j]);
                for(ll k=1;k<=j-1;k++)
                dp[i][j]=min(dp[i][j],1+dp[i][k]+dp[i][j-k]);
            }
            
        }
    }
    cout<<dp[a][b];
}