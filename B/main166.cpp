//abc166

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  set<int> ans;

  for(int i=0 ; i<k ; i++){
    int d;
    cin >> d;
    vector<int> a(d);
    for(int j=0 ; j<d ; j++){
      cin >> a[j];
      ans.insert(a[j]);
    }
  }

  cout << n - ans.size() << endl;

}
