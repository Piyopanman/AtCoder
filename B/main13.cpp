//abc159

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  stirng s;
  cin >>s;
  int n = s.size();
  string ans = "No";

  for(int i=0 ; i<n/2 ; i++){
    if(s[i] == s[n-1-i]){
      ans = "Yes";
    }
  }
  for(int i=0 ; i<(n-1)/4 ; i++){
    
  }


}
