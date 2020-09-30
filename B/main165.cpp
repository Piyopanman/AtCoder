//abc165

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  long long x;//目標
  cin >> x;
  long long crr = 100;  //今
  long long ans = 0;


  while(x > crr){
    crr += crr / 100;
    ans++;
  }



  cout << ans << endl;

}
