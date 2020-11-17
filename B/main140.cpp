//abc140

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<int> a(n);
  std::vector<int> b(n);
  std::vector<int> c(n-1);
  for(int i=0 ; i<n ; i++) {
    int kari;
    cin >> kari;
    a[i] = kari - 1;
  }
  for(int i=0 ; i<n ; i++) cin >> b[i];
  for(int i=0 ; i<n-1 ; i++) cin >> c[i];

  int ans = 0;
  for(int i=0 ; i<n ; i++){
    ans += b[i];
  }
  for(int i=0 ; i<n-1 ; i++){
    if(a[i+1] - a[i] == 1){
      ans += c[a[i]];
    }
  }

  cout << ans << endl;



}
