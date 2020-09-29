//abc168

#include <bits/stdc++.h>
using namespace std;

int main() {

  string n;
  string ans  = "hon";
  cin >> n;

  if(n.at(n.size()-1)=='3'){
    ans = "bon";
  }else if(n.at(n.size()-1)=='0' || n.at(n.size()-1)=='1' || n.at(n.size()-1)=='6' || n.at(n.size()-1)=='8'){
    ans = "pon";
  }else{
    ans  = "hon";
  }

  cout << ans << endl;

}
