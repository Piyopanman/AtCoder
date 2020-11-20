//abc135b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<int> p(n);
  for(int i=0 ; i<n ; i++) cin >> p[i];
  string ans = "NO";

  for(int i=0 ; i<n-1 ; i++){
    for(int j=i+1 ; j<n ; j++){
      int temp = p[i];
      p[i] = p[j];
      p[j] = temp;
      for(int k=0 ; k<n-1 ; k++){
        if(p[k] > p[k+1]) break;
      }
    }
  }
}
