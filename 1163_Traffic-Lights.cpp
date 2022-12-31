#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void sol(){
    int x, n;
    cin >> x >> n;
    set<int> r;
    multiset<int> lens;
    r.insert(0);r.insert(x);
    lens.insert(x);
    while(n--){
        int p;
        cin >> p;
        auto R = r.upper_bound(p), L = prev(r.upper_bound(p));
        lens.erase(lens.find(*R - *L));
        r.insert(p);
        lens.insert(*R - p);lens.insert(p - *L);


        cout << *prev(lens.end()) << ' ';
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
