//abc151

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n,k,m; //k点満点、AVEをm点以上にする
  double sum = 0;
  cin >> n >> k >> m;
  std::vector<int> a(n-1);
  for(int i=0 ; i<n-1 ; i++){
    cin >> a[i];
    sum += a[i];
  }

  double ave = sum / (n-1);

  for(int i=0 ; i<=m+1 ; i++){
    sum += i;
    if(sum/n >= m){
      cout << i << endl;
      break;
    }
    if(i == m+1){
      cout << -1 << endl;
    }
    
  }


}
