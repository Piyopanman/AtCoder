//abc176
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x,t;
  cin >> n >> x >> t;

  if(n % x == 0){
    cout << n / x * t <<endl;
  }else{
    cout << (n / x + 1) * t <<endl;
  }

}
