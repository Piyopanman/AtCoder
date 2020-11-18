//abc081

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for(int i=0 ; i<s.size() ; i++){
    if(s[i] == '1') ans++;
  }

  cout << ans << endl;
}
