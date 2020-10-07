//abc162

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int n;
  long long ans = 0;
  cin >> n;
  for(int i=1 ; i<=n ; i++){
    if(i%3==0 || i%5==0){
      continue;
    }
    ans += i;
  }

  cout << ans <<endl;
}
