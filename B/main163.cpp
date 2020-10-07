//abc163

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n,m;
  cin >> n >>m;
  int ans = n;
  std::vector<int> a(m);
  for(int i=0 ; i<m ; i++){
    cin >> a[m] ;
    ans -= a[m];
    if(ans < 0){
      ans = -1;
      break;
    }
  }

  cout << ans << endl;
}
