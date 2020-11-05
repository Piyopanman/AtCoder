//abc170_2

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int  x,y;
  string ans = "No";
  cin >> x >> y;
  for(int i=0 ; i<=x ; i++){
    int sum = 4 * i + 2 * (x-i);
    if(sum == y){
      ans = "Yes";
    }
  }
  cout << ans << endl;
}
