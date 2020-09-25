//abc175
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int c = 0;
  cin >> n;
  std::vector<int> v(n);
  for(int i=0 ; i<n ; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for(int i=0 ; i<n-2 ; i++){
    for(int j=i+1 ; j<n-1 ; j++){
      for(int k=j+1 ; k<n ; k++){

        if((v[j] + v[i] > v[k]) && (v[i] != v[j]) && (v[j] != v[k]) ){
          c++;
        }

      }
    }
  }

  cout << c << endl;


}
