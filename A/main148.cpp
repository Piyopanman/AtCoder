//abc148

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  set<int> box;
  box.insert(a);
  box.insert(b);
  for(int i=1 ; i<=3 ; i++){
    if(!box.count(i)){
      cout << i << endl;
    }
  }
}
