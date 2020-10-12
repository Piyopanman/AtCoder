//abc166

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int ans = 0;
  int n,m;
  cin >> n >> m;
  std::vector<pair<int,int>> h(n);
  for(int i=0 ; i<n ; i++){
    int hh;
    cin >> hh;
    h[i].first = hh;
    h[i].second = hh;
  }

  for(int i=0 ; i<m ; i++){
    int a,b;
    cin >> a >> b;

    if(h[a-1].first < h[b-1].first){
      h[a-1].second = 0;
    }else if(h[a-1].first > h[b-1].first){
      h[b-1].second = 0;
    }else{
      h[a-1].second = 0;
      h[b-1].second = 0;
    }

  }

  for(int i=0 ; i<n ; i++){
    if(h[i].second != 0){
      ans++;
    }
  }

  cout << ans << endl;


  // for(int i=0 ; i<n ; i++){
  //   cout << h[i].first << "," << h[i].second << endl;
  // }

}
