//abc147

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  int count = s.size()/2;
  int len = s.size();
  for(int i=0 ; i<count ; i++){
    if(s[i] != s[len-1-i]){
      ans++;
    }
  }

  cout << ans << endl;

}
