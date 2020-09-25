//abc176

#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  int s=0;
  cin >> a;
  for(int i=0 ; i<a.size() ; i++){
    s += a[i] - '0';
  }

  if(s%9 ==0){
    cout << "Yes" << endl;
  }else{
    cout << "No" <<endl;
  }



}
