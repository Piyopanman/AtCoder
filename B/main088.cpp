//abc088

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<int> a(n);
  for(int i=0 ; i<n ; i++) cin >> a[i];

  int alice = 0;
  int bob = 0;
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  for(int i=0 ; i<n ; i++){
    if(i % 2 == 0){
      alice += a[i];
    }else{
      bob += a[i];
    }
  }

  cout << alice - bob << endl;

}
