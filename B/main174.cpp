//abc174

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,d,ans = 0;
  cin >> n >> d;
  for(int i=0 ; i<n ; i++){
    int64_t x,y;
    double dis;
    cin >> x >> y;
    dis = sqrt(x*x + y*y);
    if(dis <= d){
      ans++;
    }
  }

  cout << ans << endl;

}
