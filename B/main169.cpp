//abc169

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int n;
  int zero=0;
  cin >> n;
  int64_t ans = 1;
  std::vector<long> v(n);

  for(int i=0 ; i<n ; i++){
    cin >> v[i];
  }

  for(int i=0 ; i<n ; i++){
    if(v[i] <= 1000000000000000000 / ans){
      ans *= v[i];
    }else{
      ans = -1;
      break;
    }
  }

  for(int i=0 ; i<n ; i++){
    if(v[i]==0){
      zero++;
    }
    if(zero > 0){
      ans = 0;
    }
  }
  cout << ans << endl;

}
