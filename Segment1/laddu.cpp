#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve() {
  int n;
  string nation;
  cin >> n >> nation;
  int laddu = 0;
  for (int i = 0; i < n ; i++) {
    cin.ignore();
    string act;
    getline(cin, act);
    if (act.find(' ') != string::npos) {
      string word = "";
      string num = "";
      int idx;
      for (idx = 0; idx < act.length(); idx++) {
        if (act[idx] == ' ') {
          break;
        }
        word = word + act[idx];
      }
      for (int i = idx + 1; i < act.length() ; i++) {
        num = num + act[i];
      }
      int v = stoi(num);

      if (word == "BUG_FOUND") {
        laddu += v;
      }
      else {
        laddu += 300 + ((v < 20) ? (20 - v) : 0);
      }
    }
    else {
      if (act == "TOP_CONTRIBUTOR") {
        laddu += 300;
      }
      else {
        laddu += 50;
      }
    }
  }
  cout << laddu << "\n";
  if (nation == "INDIAN") {
    cout << (laddu / 200) << "\n";
  }
  else {
    cout << (laddu / 400) << "\n";
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