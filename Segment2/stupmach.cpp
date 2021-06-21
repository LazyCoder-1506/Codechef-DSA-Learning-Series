#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int min_token = arr[0];
  int tot_token = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < min_token) {
      min_token = arr[i];
    }
    tot_token += min_token;
  }
  cout << tot_token << "\n";
}

signed main() {
  int tests;
  cin >> tests;
  while (tests--) {
    solve();
  }
  return 0;
}