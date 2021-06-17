#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  string s;
  cin >> s;
  map<char, int> alpha;
  alpha['a'] = 0;
  alpha['b'] = 0;
  alpha['c'] = 0;
  alpha['d'] = 0;
  alpha['e'] = 0;
  alpha['f'] = 0;
  alpha['g'] = 0;
  alpha['h'] = 0;
  alpha['i'] = 0;
  alpha['j'] = 0;
  alpha['k'] = 0;
  alpha['l'] = 0;
  alpha['m'] = 0;
  alpha['n'] = 0;
  alpha['o'] = 0;
  alpha['p'] = 0;
  alpha['q'] = 0;
  alpha['r'] = 0;
  alpha['s'] = 0;
  alpha['t'] = 0;
  alpha['u'] = 0;
  alpha['v'] = 0;
  alpha['w'] = 0;
  alpha['x'] = 0;
  alpha['y'] = 0;
  alpha['z'] = 0;

  int len = s.length();

  for (int i = 0; i < len / 2; i++) {
    alpha[s[i]]++;
    if (len % 2 == 0) {
      alpha[s[(len / 2) + i]]--;
    } else {
      alpha[s[(len / 2) + 1 + i]]--;
    }
  }

  for (auto itr = alpha.begin(); itr != alpha.end(); ++itr) {
    if (itr->second) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}