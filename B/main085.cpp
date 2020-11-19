//abc085

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<int> d(n);
  for(int i=0 ; i<n ; i++) cin >> d[i];

  sort(d.begin(), d.end());
  reverse(d.begin(), d.end());

  int count = 1;
  for(int i=0 ; i<n-1 ; i++){
    if(d[i] <= d[i+1]) continue;
    count++;
  }

  cout << count << endl;

}
