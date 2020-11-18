//abc138

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<double> a(n);
  double sum = 0;
  for(int i=0 ; i<n ; i++) {
    int kari ;
    cin >> kari;
    a[i] = 1.0/kari;
    sum += a[i];
  }

  cout << 1.0/sum << endl;

}
