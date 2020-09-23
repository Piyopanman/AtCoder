//APG4b ex23

#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  std::map<int, int> a;
  for(int i=0 ; i<n ; i++){
    int x;
    cin >> x;
    if(!a.count(x)){
      a[x] = 1;
    }else{
      a[x]++;
    }
  }

  int max = 0;
  int max2 = 0;
  for(auto p : a){
    auto key = p.first;
    auto value = p.second;
    if(value > max){
      max = value;
      max2 = key;
    }
  }

  cout << max2 << " " << max << endl;





}
