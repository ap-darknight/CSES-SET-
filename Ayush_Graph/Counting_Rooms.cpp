#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ba back
#define ppb pop_back
#define eb emplace_back
#define eps 1e-6
#define vll vector<long long int>
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
ll power(ll a,ll n){  if(n==0) return 1;  else if(n==1) return a;  ll R=power(a,n/2);  if(n%2==0) {  return R*R; }   else { return R*a*R;  }}
 
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

 
//------------------------------------------------------------------------------------------
 
ll n,m;
vector<string> s(1005);
bool vis[1005][1005];
ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
bool isvalid(ll x,ll y)
{
  if(x<0||x>=n||y<0||y>=m)
    return false;
  if(s[x][y]=='#'||vis[x][y]==true)
    return false;
  return true;
}
void dfs(ll x,ll y)
{
  vis[x][y]=true;
  for(ll i=0;i<4;i++)
  {
    if(isvalid(x+dx[i],y+dy[i]))
      dfs(x+dx[i],y+dy[i]);
  }
}
void solve()
{
  cin>>n>>m;
  ll count=0;
  ll i,j;
  for(i=0;i<n;i++) 
    cin>>s[i];
  
  for(i=0;i<n+1;i++)
  {
    for(j=0;j<m+1;j++){
      vis[i][j]=false;
    }
  }
 
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(vis[i][j]==true||s[i][j]=='#')
        continue;
      count++;
     
      dfs(i,j);
    }
  }
  cout<<count<<endl;
}
int main(){
    FAST;

// ll t;
// cin>>t;
// while(t--)
solve();
}