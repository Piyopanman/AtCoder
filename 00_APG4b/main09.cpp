//ApG4b ex14

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  std::vector<int> v = {A,B,C};
  sort(v.begin(),v.end());
  cout << v[2] - v[0] << endl;
}
