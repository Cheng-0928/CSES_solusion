#include <iostream>
#include <set>
 
using namespace std;
 
int main() {
  int n, k;
  cin >> n >> k;
  multiset<int, greater<int>> left; multiset<int> right;
  int x[n];
  for(int &it : x) cin >> it;
  for(int i = 0;i<n;i++){
    if(left.empty() || x[i] <= *left.begin()) left.insert(x[i]);
    else right.insert(x[i]);
    if(i >= k){
      if(!left.empty() && x[i-k] <= *left.begin()) left.erase(left.find(x[i-k]));
      else right.erase(right.find(x[i-k]));
      
      }
    while(left.size() > right.size()){
      right.insert(*left.begin());
      left.erase(left.begin());
    }
    while(left.size() < right.size()){
      left.insert(*right.begin());
      right.erase(right.begin());
    }
    if(i >= k-1) cout << *left.begin() << ' ';
    }
    
  
  
  return 0;
}
