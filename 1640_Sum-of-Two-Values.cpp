#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#define f first
using namespace std;
 
int main() {
  int n,x;
  cin >> n >> x;
  vector<pair<int ,int>> arr(n);
  for(int i = 0;i<n;i++) {
    int it;
    cin >> it;
    arr[i] = {it,i+1};
  }
  int ltpr = 0, rtpr = n-1;
  bool ch = 1;
  sort(arr.begin(), arr.end());
  while(ltpr < rtpr){
    if(arr[ltpr].f + arr[rtpr].f < x) ltpr++;
    else if(arr[ltpr].f + arr[rtpr].f > x) rtpr--;
    else if(arr[ltpr].f + arr[rtpr].f == x) {
      cout << arr[ltpr].second << ' ' << arr[rtpr].second;
      ch = 0;
      break;
    }
  }
  if(ch) cout << "IMPOSSIBLE";
  return 0;
}
