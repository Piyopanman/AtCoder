//abc177

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  long long sum = 0;
  int mod = 1000000007;
  cin >> n;
  long long ans = 0;
  std::vector<int> a(n);
  std::vector<long long> b(n+1);
  for(int i=0 ; i<n ; i++){
    cin >> a[i];
  }

  for(int i=1 ; i<n+1 ; i++){
    b[i] = a[i-1] + b[i-1];
  }

  for(int i=0 ; i<n ; i++){
    sum = (b[n] - b[i+1]) % mod;
    ans += sum * a[i];
    ans %= mod;
  }

  cout << ans << endl;



}
