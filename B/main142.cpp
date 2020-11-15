//abc142

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n, k;
  int count = 0;
  cin >> n >> k;
  std::vector<int> h(n);
  for(int i=0 ; i<n ; i++) {
    cin >> h[i];
    if(h[i] >= k){
      count++;
    }
  }

  cout << count << endl;



}
