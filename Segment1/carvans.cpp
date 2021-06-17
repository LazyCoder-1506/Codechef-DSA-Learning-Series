#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  int speeds[n];
  for (int i = 0; i < n ;i++) {
    cin >> speeds[i];
  }
  int max_speed = 1;
  for (int i = 1; i < n; i++) {
    if (speeds[i] > speeds[i - 1]) {
      speeds[i] = speeds[i - 1];
    } else {
      max_speed++;
    }
  }
  cout << max_speed << "\n";
}

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}