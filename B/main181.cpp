//abc181

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long sum=0;

  for(int i=0 ; i<n ; i++){
    long long a,b;
    cin >> a >> b;
    sum += b * (b + 1) / 2 - a * (a - 1) / 2;
  }


  cout << sum << endl;

}
