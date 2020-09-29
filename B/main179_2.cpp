//abc179_2

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  int count = 0;
  string ans = "No";
  cin >> n;
  std::vector<int> d1(n);
  std::vector<int> d2(n);

  for(int i=0 ; i<n ; i++){
    cin >> d1[i] >> d2[i];
    if(d1[i] == d2[i]){
      count++;
      if(count == 3){
        ans = "Yes";
        break;
      }
    }else{
      count = 0;
    }
  }

  cout << ans << endl;



}
