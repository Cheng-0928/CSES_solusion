#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void sol(){
    int n,x;
    cin >> n >> x;
    map<int,int> mp;
    int ans = 0;
    mp[0]++;
    int sum = 0;
    for(int i = 0;i<n;i++){
        int it;
        cin >> it;
        sum+=it;
        //mp[sum]++;
        if(mp.find(sum-x) != mp.end()) ans+=mp[sum-x];
        mp[sum]++;
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
