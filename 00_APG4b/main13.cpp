//APG4b ex18
#include <bits/stdc++.h>
using namespace std;

int main() {

  int N,M;
  cin >> N >> M ;
  vector<int> A(M), B(M);


  for(int i=0 ; i<M ; i++){
    cin >> A[i] >> B[i];
  }

  vector<vector<char>> ans(N,vector<char>(N));

  for(int i=0 ; i<M; i++){
      ans.at(A[i]-1).at(B[i]-1) = 'o';
      ans.at(B[i]-1).at(A[i]-1) = 'x';
  }
  for(int i=0 ; i<N ; i++){
    for(int j=0 ; j<N ; j++){
      if(ans.at(i).at(j)!='x' && ans.at(i).at(j)!='o'){
        ans.at(i).at(j)='-';
      }
    }
  }

  for(int i=0 ; i<N ; i++){
    for(int j=0 ; j<N ; j++){
      if(j == N-1){
        cout << ans.at(i).at(j);
      }else{
        cout << ans.at(i).at(j) << " ";
      }
    }
    cout << endl;
  }

}
