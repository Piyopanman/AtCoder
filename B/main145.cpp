//abc145

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  string s;
  string ans = "No";
  cin >> n >> s;
  if(n % 2 == 0){
    string first = "";
    string latter = "";
    for(int i=0 ; i<n/2 ; i++){
      first += s[i];
    }
    for(int i=n/2 ; i<n ; i++){
      latter += s[i];
    }
    if(first == latter){
      ans = "Yes";
    }
  }
  cout << ans << endl;
}
