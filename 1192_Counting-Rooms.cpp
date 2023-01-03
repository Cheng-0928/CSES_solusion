#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

string mp[1000];
int visited[1000][1000];
int n, m;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};


bool vailed(int x, int y){
    return (x >= 0 && y >= 0 && x < m && y < n);
}

void dfs(int x, int y){
    if(!vailed(x,y) || visited[y][x] || mp[y][x] == '#') return;
    visited[y][x] = 1;
    for(int i = 0;i<4;i++){
        int d_x = x + dx[i], d_y = y + dy[i];
        if(!vailed(d_x,d_y) || visited[d_y][d_x] || mp[d_y][d_x] == '#') continue;
        dfs(d_x, d_y);
    }
}

void sol(){
    cin >> n >> m;
    int ans = 0;
    for(int i = 0;i<n;i++) cin >> mp[i];
    for(int x = 0; x<m;x++){
        for(int y = 0;y<n;y++){
            if(visited[y][x] || mp[y][x] == '#') continue;
            dfs(x, y);
            ans++;
        }
    }
    cout << ans << '\n';
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
