//abc170

#include <bits/stdc++.h>
using namespace std;

int main() {
  int x,y;
  string ans = "No";
  cin >> x >> y;

  for(int i=0 ; i<=x ; i++){
    if(i*2 + (x-i)*4 == y){
      ans = "Yes";
      break;
    }
  }

  cout << ans << endl;


}
