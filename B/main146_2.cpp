//abc146_2

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for(int i=0 ; i<s.size() ; i++){
    int kari = s[i] - 'A';
    kari = (kari + n) % 26;
    s[i] = kari + 'A';

  }

  cout << s << endl;

}
