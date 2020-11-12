//abc146

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for(int i=0 ; i<s.size() ; i++){
    int x = s[i] - 'A';
    x = (x + n) % 26;
    s[i] = x + 'A';
  }
  // int test = 'A';
  // cout << test << endl;  //65
  cout << s <<  endl;


}
