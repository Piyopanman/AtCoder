//abc139

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s,t;
  int count = 0;
  cin >> s >> t;
  for(int i=0 ; i<3; i++){
    if(s[i] == t[i]){
      count++;
    }
  }

  cout << count << endl;
}
