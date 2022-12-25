#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

void sol(){
    int n, m;
    cin >> n >> m;
    multiset<int> ticket;
    for(int i = 0;i<n;i++){
        int it;
        cin >> it;
        ticket.insert(it);
    }
    while(m--){
        int p;
        cin >> p;
        auto it = ticket.upper_bound(p);
        if(it == ticket.begin()) cout << -1;
        else{
            it--;
            cout << *it;
            ticket.erase(it);
        }
        cout << '\n';
    }
}

signed main()
{
    Cheng0928
    /*int t;
    cin >> t;
    while(t--) */sol();
    return 0;
}
