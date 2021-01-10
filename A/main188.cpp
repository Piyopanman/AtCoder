//abc188 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int x,y;
  cin >> x >> y;
  if(x < y && x + 3 > y){
    cout << "Yes" << endl;
  }else if(y < x && y + 3 > x){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
