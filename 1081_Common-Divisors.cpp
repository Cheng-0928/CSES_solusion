#include <bits/stdc++.h>
#define int long long //TLE or MLE remove
#define f first
#define s second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;

const int MAX_X = 1000000;
vector<int> cnt(MAX_X +1, 0);

void sol(){
    //freopen("cereal.in", "r", stdin);
    //freopen("cereal.out", "w", stdout);
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = -1;
    for(int i = MAX_X;i >0;i--){
        int v = 0;
        for(int j = i;j<=MAX_X;j+=i) v+=cnt[j];
        if(v >= 2) {ans = i; break;}
    }
    cout << ans << '\n';

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
