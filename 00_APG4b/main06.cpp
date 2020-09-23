//ApG4b ex11

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,a,b;
  string op;

  cin >> n >> a ;

  int ans = a;

  for(int i=0 ; i<n ; i++){
    cin >> op >> b;
    if(op == "+"){
      ans += b;
    }
    if(op == "-"){
      ans -= b;
    }
    if(op == "*"){
      ans *= b;
    }
    if(op == "/"){
      if(b == 0){
        cout << "error" << endl;
        break;
      }else{
        ans /= b;
      }
    }
    cout << i + 1 << ":" << ans <<endl;
  }

}
