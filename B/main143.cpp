//abc143

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  long sum = 0;
  cin >> n;
  std::vector<int> d(n);
  for(int i=0 ; i<n ; i++){
    cin >> d[i];
  }
  for(int i=0 ; i<n-1 ; i++){
    for(int j=i+1 ; j<n ; j++){
      sum += d[i] * d[j];
    }
  }
  cout << sum << endl;
}
