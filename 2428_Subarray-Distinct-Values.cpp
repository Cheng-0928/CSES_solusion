#include <iostream>
#include <map>
#include <vector>
#define int long long

using namespace std;

map<int, int> cnt;

signed main() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(int &it : v) cin >> it;
  int l = 0, r = 0, d = 0, ans = 0;
  while(l < n){
    while(r < n && d + (cnt[v[r]] == 0) <= k){
      d+=(cnt[v[r]] == 0);
      cnt[v[r]]++;
      r++;
    }
    ans += (r - l);
    cnt[v[l]]--;
    d -= (!cnt[v[l]]);
    l++;
  }
  cout << ans;
  
  return 0;
}
