#include <bits/stdc++.h>
//#define int long long //TLE or MLE remove
#define f first
#define s second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SIZE(a) signed(a.size())

using namespace std;

const int MAXN = 40000001;
bitset<MAXN> b;

void sol(){
    //freopen("cereal.in", "r", stdin);
    //freopen("cereal.out", "w", stdout);
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        int ans = 0, i;
        for(i = 1;i * i < x;i++){
            ans+= 2 * !(x % i);
        }
        ans += (i*i == x);
        cout << ans << '\n';
    }

}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--)*/ sol();
    return 0;
}
