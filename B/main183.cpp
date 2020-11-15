//abc183

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  double sx, sy, gx, gy;
  double ans;
  cin >> sx >> sy >> gx >> gy;
  double gyy = -gy;
  double katamuki = (gyy - sy) / (gx - sx);

  ans = abs(sy) / abs(katamuki);

  if(sx < gx){
    cout << fixed << setprecision(15) << sx + ans << endl;
    //cout << sx + ans << endl;
  }else{
    cout << fixed << setprecision(15) << sx - ans << endl;
    //cout << sx - ans << endl;
  }




}
