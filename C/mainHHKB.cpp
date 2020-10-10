//HHKB C

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  std::vector<int> v(n);
  std::vector<int> ans(n);
  set<int> vv;

  for(int i=0 ; i<n ; i++){
    int j;
    cin >> j;
    v[i] = j;
    vv.insert(j);
    int max = *rbegin(vv);
    int count = 0;

    for(int i=0 ; i<=max+1 ; i++){
      if(i != max+1){
        if(i < j && !vv.count(i)){
          ans[count] = i;
          break;
        }
      }else{
        ans[count] = i;
      }
    count++;
    }

  }




  for(int i=0 ; i<n ; i++){
    cout << ans[i] << endl;
  }


}
