//abc151

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n,k,m; //k点満点、AVEをm点以上にする
  int sum = 0;
  int ans = -1;
  std::vector<int> a(n);
  cin >> n >> k >> m;
  for(int i=0 ; i<n-1 ; i++){
    cin >> a[i];
    sum += a[i];
  }

  int ave = 0;
  int last = 0;
  while(ave < m){
    ave = (sum + last) / n;
    if(ave >= m){
      break;
    }
    last++;
    if(last > k){
      last = -1;
      break;
    }
  }

  cout << last << endl;


}
