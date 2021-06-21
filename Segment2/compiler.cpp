#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  string s;
  cin >> s;
  int flag = 0;
  int i;
  int prefix = 0;
  for (i = 0; i < s.length(); i++) {
    if (s[i] == '<') {
      flag++;
    }
    else {
      if (flag == 0) {
        cout << i << "\n";
        return;
      }
      else {
        flag--;
      }
    }

    if (flag == 0) {
      prefix = i + 1;
    }
  }
  // if (flag == 0) {
  //   cout << i << "\n";
  // }
  // else {
  //   cout << "0\n";
  // }
  cout << prefix << "\n";
}

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}