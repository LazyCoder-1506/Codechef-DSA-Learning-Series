#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    string t;
    cin >> t;
    reverse(t.begin(), t.end());
    int n = stoi(t);
    cout << n << "\n";
  }
  return 0;
}