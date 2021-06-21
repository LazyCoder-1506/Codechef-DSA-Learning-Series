#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  int max_pro = 0;
  for (int i = 0; i < n; i++) {
    int s, p, v;
    cin >> s >> p >> v;
    int cust = p / (s + 1);
    int pro = cust * v;
    if (pro > max_pro) {
      max_pro = pro;
    }
  }
  cout << max_pro << "\n";
}

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}