//abc182

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int ans = 2 * a + 100 - b;
  if(ans < 0){
    cout << 0 << endl;
  }else{
    cout << ans << endl;
  }
}
