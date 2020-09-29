//abc171

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  int ans=0;
  cin >> n >> k;
  vector<int> p(n);

  for(int i=0 ; i<n ; i++){
    cin >> p[i];
  }

  sort(p.begin(),p.end());

  for(int i=0 ; i<k ; i++){
    ans += p[i];
  }

  cout << ans << endl;

}
