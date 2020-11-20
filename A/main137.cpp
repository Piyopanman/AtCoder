//abc137

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int tasu = a + b;
  int hiku = a - b;
  int kakeru = a * b;

  cout << max(tasu,max(hiku,kakeru)) << endl;
}
