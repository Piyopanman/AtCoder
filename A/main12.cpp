//abc155

#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> data;
  for(int i=0 ; i<3 ; i++){
    int x;
    cin >> x ;
    data.insert(x);
  }

  if(data.size() == 2){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
