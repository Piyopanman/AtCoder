//abc133 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    int ans = 0;
    vector<vector<int>> X(N, vector<int>(D));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            cin >> X[i][j];
        }
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            int sum = 0;
            for(int k = 0; k < D; k++){
                int diff = abs(X[i][k] - X[j][k]); 
                sum += diff * diff;
            }
            bool flag = false;
            for(int k = 0; k <= sum; k++){
                if(k * k == sum){
                    ans++;
                    break;
                }
             }
        }
        
    }

    cout << ans << endl;

}
