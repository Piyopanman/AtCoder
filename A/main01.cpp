//ABC179

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.length();
  if(s[len-1] != 's'){
    cout << s << "s" <<endl;
  }else{
    cout << s << "es" <<endl;
  }
}
