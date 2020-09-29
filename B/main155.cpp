//abc155

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string ans = "APPROVED";
  int n;
  cin >> n;
  std::vector<int> a(n);
  for(int i=0 ; i<n ; i++){
    cin >> a[i];
    if(a[i] % 2 == 0){
      if(a[i]%3 != 0 && a[i]% 5!= 0){
        ans = "DENIED";
        break;
      }
    }
  }
  cout << ans << endl;
}
