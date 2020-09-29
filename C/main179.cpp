//abc179

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  int ans = 0;
  cin >> n;
  for(int i=1 ; i<n ; i++){
    ans += (n-1) / i;
  }

  cout << ans << endl;

}
