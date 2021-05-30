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

//-------------------------------------------------------------------------------------------------
/*
                          (i,j)    player -1
                          /   \
            (i+1,j)                (i,j-1) player-2
            /     \                 /     \
       (i+2,j)   (i+1,j-1)      (i+1,j-1)  (i,j-2)  player-1
 
       f(i,j)=max(a[i]+(f(i-2,j),f(i-1,j-1)),a[j]+(f(i-1,j-1),f(i,j-2)))
*/
ll dp[5002][5002];
vll a(5002);
ll n;
ll rec(ll i,ll j)
{
   if(i<0 || j>=n)
   return 0;
   if(i>j)
   return 0;
   if(dp[i][j]!=-1)
   return dp[i][j];
   if(i==j){
       dp[i][j]=a[i];
   return a[i];}
   ll op1=rec(i+2,j);
   ll op2=rec(i+1,j-1);
   ll op3=rec(i,j-2);
   dp[i][j]=max(min(op1+a[i],op2+a[i]),min(op2+a[j],op3+a[j]));
   return dp[i][j];
 
}
//un comment for bottom up
int main(){
    cin>>n;
    ll i;
    // for(i=0;i<=n;i++)
    // {
    //     for(ll j=0;j<=n;j++)
    //     dp[i][j]=-1;
    // }
    for(i=0;i<n;i++)
    cin>>a[i];
 //   cout<<rec(0,n-1);
    // bottom up approch
    for(ll len=1;len<=n;len++)
    {
     for(i=0;i+len<=n;i++)
     {
         ll j=i+len-1;
         ll x,y,z;
         x=(i+2<=j)?dp[i+2][j]:0;
         y=(i+1<=j-1)?dp[i+1][j-1]:0;
         z=(i<=j-2)?dp[i][j-2]:0;
         dp[i][j]=max(a[i]+min(x,y),a[j]+min(y,z));
     }
    }
    cout<<dp[0][n-1];
}