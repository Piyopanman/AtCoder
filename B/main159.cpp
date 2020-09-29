//abc159

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int frg = 0;
  string ans = "No";

  //普通に回文かどうか
  int c = 0;
  for(int i=0 ; i<n/2 ; i++){
    if(s[i] == s[n-1-i]){
      c++;
    }
    if(c == n/2) frg = 1;
  }

  c = 0;
  if(frg == 1){
    for(int i=0 ; i<(n-1)/4 ; i++){
      if(s[i] == s[(n-1)/2 - 1 - i]){
        c++;
      }
    }
    if(c == n/4) frg = 2;
  }


  c = 0;
  if(frg == 2){
    for(int i=0 ; i<n/4  ; i++){
      if(s[(n+3)/2-1+i] == s[n-1-i]){
        c++;
      }
    }
    if(c == n/4) ans = "Yes";
  }


  cout << ans << endl;


}
