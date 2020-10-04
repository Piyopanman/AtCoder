//abc164

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int a,b,c,d;
  string ans = "No";
  cin >> a >> b >> c >> d;

  for(int i=0 ; i<100 ; i++){
    c -= b;
    if(c <= 0){
      ans = "Yes";
      break;
    }
    
    a -= d;
    if(a <= 0){
      break;
    }
  }

  cout << ans << endl;


}
