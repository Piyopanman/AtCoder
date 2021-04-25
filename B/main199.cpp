//abc199 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(1001);
    for(int i=0 ; i<N ; i++){
        cin >> A[i];
    }
    for(int i=0 ; i<N ; i++){
        cin >> B[i];
    }

    for(int i=0 ; i<N ; i++){
        for(int j=A[i] ; j<=B[i] ; j++){
            C[j]++;
        }
    }
    int ans = 0;
    for(int i=0 ; i<1001 ; i++){
        if(C[i] == N){
            ans++;
        }
    }

    cout << ans << endl;

}
