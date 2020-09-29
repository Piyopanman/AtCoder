//abc169

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

  int a,b,c,k;
  int ans = 0;
  cin >> a >> b >> c >> k;

  if(a > k){
    ans = k;
  }else if(k <= a + b){
    ans = a;
  }else{
    ans = a - (k - (a + b));
  }

  cout << ans << endl;

}
