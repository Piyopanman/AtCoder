//abc

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  long long sum = 0;
  long long ans = 0;
  long long k = s.size();
  //long long origin = s - '0';
  std::vector<int> n(k);
  for(int i=0 ; i<k ; i++){
    n[i] = s[i]- '0';
    sum += n[i];
  }

  if(sum % 3 == 0){
    ans = 0;
  }else if(sum % 3 == 1){
    for(int i=0 ; i< k ; i++){
      if(n[i] == 1){
        ans = 1;
        break;
      }
      if(i == k-1){
        ans = -1;
      }
    }
  }else if(sum % 3 == 2){
    for(int i=0 ; i< k ; i++){
      if(n[i] == 2){
        ans = 2;
        break;
      }
      if(i == k-1){
        ans = -1;
      }
     }
   }
  cout << ans << endl;
  //cout << sum << endl;


}
