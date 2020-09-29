//abc167

#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  int count = 0;
  cin >> s  >> t ;

  int len = s.size();

  if(len == t.size()-1){
    for(int i = 0 ; i<len ; i++){
      if(s[i] == t[i]){
        count++;
      }
    }
  }

  if(count == len){
    cout << "Yes" <<endl;
  }else{
    cout << "No" <<endl;
  }


}
