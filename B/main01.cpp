//abc179

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int count = 0;
  bool ans = false;
  cin >> n;
  std::vector<pair<int,int>> v(n);

  for(int i=0 ; i<n ; i++){
    int a,b;
    cin >> a >> b ;
    v.at(i) = make_pair(a,b);
  }

  for(int i=0 ; i<n ; i++){
    if(v.at(i).first == v.at(i).second){
      count++;
      if(count == 3){
        ans = true;
        break;
      }
    }else{
      count = 0;
    }
  }

  if(ans){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }


}
