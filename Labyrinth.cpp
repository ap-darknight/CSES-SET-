#include<bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define pii pair<int,int>
#define fast ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0) ;
 
const int nax = 1e3+10;
bool vis[nax][nax];
char last[nax][nax];
int sx , sy , ex, ey , n , m ;
 
bool valid( int x,int y )
{
    if( x>=0 && y>=0 && x<n && y<m && !vis[x][y] )
        return 1;
    return 0;
}
void bfs()
{
    vis[sx][sy] = 1;
    queue< pii > q;
    q.push({sx,sy});
    while(!q.empty())
    {
        pii p = q.front();
        q.pop();
        int x = p.ff;
        int y = p.ss;
    if( x==ex && y==ey )
    {
        string s;
        cout << "YES\n";
        while( x!=sx || y!=sy )
        {
            s += last[x][y];
            if( last[x][y] == 'U' ) x++;
            else if( last[x][y] == 'D' ) x--;
            else if( last[x][y] == 'L' ) y++;
            else y--;
        }
        reverse(s.begin(),s.end());
        cout << s.size() << "\n" << s;
        exit(0);
 
    }
        if( valid( x-1,y) ) vis[x-1][y] = 1, last[x-1][y] = 'U',q.push({x-1,y});
        if( valid( x+1,y) ) vis[x+1][y] = 1, last[x+1][y] = 'D',q.push({x+1,y});
        if( valid( x,y-1) ) vis[x][y-1] = 1, last[x][y-1] = 'L',q.push({x,y-1});
        if( valid( x,y+1) ) vis[x][y+1] = 1, last[x][y+1] = 'R',q.push({x,y+1});
    }
    return ;
}
signed main()
{
    fast;
    cin >> n >> m;
    for(int i = 0 ; i < n  ; i++ )
    {
        string s;
        cin >> s;
        for(int j=0; j < m ; j++ )
        {
            if( s[j] == 'A' ) sx = i , sy = j;
            else if( s[j] == 'B' ) ex = i , ey = j;
            else if( s[j] == '#' ) vis[i][j] = 1;
        }
    }
    bfs();
    cout << "NO";
 
}
