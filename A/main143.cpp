//abc143

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  if(a - b * 2 < 0){
    cout << 0 << endl;
  }else{
    cout << a - b * 2 << endl;
  }
}
