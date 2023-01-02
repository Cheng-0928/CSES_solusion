#include <bits/stdc++.h>
#define int long long
#define X first
#define Y second
#define Cheng0928 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define size(a) signed(a.size())

using namespace std;

const int MOD = 1000000000 + 7;

int f(int a, int b){
    if(!b) return 1;
    if(b == 1) return a;
    if(b % 2) return (f(a,b/2) * f(a,b/2))%MOD * a%MOD;
    return ((f(a,b/2)) * (f(a,b/2)))%MOD;
}

void sol(){
    int a, b;
    cin >> a >> b;
    cout << f(a,b) << '\n';

}

signed main()
{
    Cheng0928
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}
