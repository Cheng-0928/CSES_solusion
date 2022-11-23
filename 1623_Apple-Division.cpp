#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int get(int x, int i){
  return (x >> i) & 1;
}
 
signed main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for(int &i : v) cin >> i;
  int ans = 1000000005;
  for(int i = 0;i<(1LL << n);i++){
    int b1 = 0,b2 = 0;
    for(int j = 1;j<=n;j++){
      if(get(i, j) == 0) b1+=v[j-1];
      else b2+=v[j-1];
    }
    ans = min(ans, abs(b1-b2));
  }
  cout << ans;
  return 0;
}
