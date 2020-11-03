//abc180

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  cout << fixed << setprecision(15);

  int N;
  cin >> N;
  long m;
  int t = 0;
  long y;
  m = y = 0;
  for(int i = 0; i<N; ++i){
    int x;
    cin >> x;
    m += (long)abs(x);
    t = max(t, abs(x));
    y += (long)abs(x)*(long)abs(x);
  }
  cout << m << endl << sqrt(y) << endl << t << endl;
}
