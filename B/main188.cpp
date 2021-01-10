//abc188 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
    std::vector<int> a(n);
    std::vector<int> b(n);
    for(int i=0 ; i<n ; i++){
      cin >> a[i];
    }
    for(int i=0 ; i<n ; i++){
      cin >> b[i];
    }

    long long sum = 0;
    for(int i=0 ; i<n ; i++){
      sum += a[i] * b[i];
    }

    if(sum == 0){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }

}
