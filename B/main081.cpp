//abc081

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<int> a(n);
  int count = 0;
  bool flag = true;
  for(int i=0 ; i<n ; i++) {
    cin >> a[i];
    if(a[i] % 2 == 1){
      flag = false;
    }
  }

  while(flag){
    for(int i=0 ; i<n ; i++){
      a[i] = a[i] / 2;
      if(a[i] % 2 == 1){
        flag = false;
        break;
      }
    }
    count++;
  }
  cout << count << endl;
}
