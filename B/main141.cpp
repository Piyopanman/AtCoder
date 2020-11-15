//abc141

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool kisu = true;
  bool gusu = true;

  for(int i=0 ; i<=s.size() ; i=i+2){ //奇数
    if(s[i] != 'R' && s[i] != 'U' && s[i] != 'D'){
      kisu = false;
      break;
    }
  }

  for(int i=1 ; i<=s.size() ; i=i+2){
    if(s[i] != 'L' && s[i] != 'U' && s[i] != 'D'){
      gusu = false;
      break;
    }
  }

  if(kisu && gusu){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

}
