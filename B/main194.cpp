//abc194 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int>A(N);
    vector<int>B(N);
    int min = 200000;
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int sum;
            if(i == j){
                sum = A[i] + B[j];
            }else{
                sum = max(A[i], B[j]);
            }
            if(sum < min) min = sum;
        }
    }

    cout << min << endl;
  
}
