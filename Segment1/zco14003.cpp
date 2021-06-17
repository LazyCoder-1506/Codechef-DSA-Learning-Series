#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  int budget[n];
  for (int i = 0; i < n ; i++) {
    cin >> budget[i];
  }
  sort(budget, budget + n);
  int max_rev = 0;
  for (int i = 0; i < n ; i++) {
    int rev = budget[i] * (n - i);
    if (rev > max_rev) {
      max_rev = rev;
    }
  }
  cout << max_rev << "\n";
}

signed main() {
  int tests = 1;
  // cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}