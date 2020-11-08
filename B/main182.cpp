//abc182

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  int maxx = -1;
  std::vector<int> a(n);
  for(int i=0 ; i<n ; i++){
    cin >> a[i];
    if(maxx < a[i]){
      maxx = a[i];
    }
  }


  int kari = -1;
  int count = 0;
  int ans;
  for(int i=2 ; i<=maxx ; i++){
    for(int j=0 ; j<n ; j++){
      if(a[j] % i == 0){
        count++;
      }
    }
    if(count > kari){
      kari = count;
      ans = i;
    }
    count = 0;
  }

  cout << ans << endl;

}
