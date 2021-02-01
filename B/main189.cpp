//abc189

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  double n,x;
  cin >> n >> x;
  int ans = 0;
  int sum = 0;
  for(int i=1 ; i<=n ; i++){
    int v,p;
    cin >> v >> p;
    sum += v * p;
    if(sum > x * 100){
      ans = i;
      break;
    }
    if(i == n){
      ans = -1;
    }
  }

  cout << ans << endl;
}
