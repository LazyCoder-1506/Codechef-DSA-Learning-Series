#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define head true
#define tail false

void solve() {
  int g;
  cin >> g;
  while (g--)
  {
    int i, n, q;
    cin >> i >> n >> q;
    bool state = (i == 1) ? head : tail;
    int h, t;
    if (n % 2 == 0) {
      h = t = n / 2;
    }
    else {
      if (state == head) {
        h = n / 2;
        t = n - h;
      } else {
        t = n / 2;
        h = n - t;
      }
    }
    int res = (q == 1) ? h : t;
    cout << res << "\n";
  }
  
}

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}