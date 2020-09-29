
//abc170
#include <bits/stdc++.h>
using namespace std;

int main() {
  std::vector<int> v(5);
  for(int i=0 ; i<5 ; i++){
    cin >> v[i];
    if(v[i] == 0){
      cout << i + 1 <<endl;
      break;
    }
  }
}
