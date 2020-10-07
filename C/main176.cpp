//abc176

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  long long ans = 0;
  cin >> n;
  std::vector<int> a(n);
  for(int i=0 ; i<n ; i++){
    cin >> a[i];
    if(i > 0 && a[i-1] > a[i]){
      while(a[i-1] > a[i]){
        a[i]++;
        ans++;
      }
      //cout << i << ":" << ans << endl;
    }
  }

  cout << ans << endl;

}
