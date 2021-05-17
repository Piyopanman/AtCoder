//abc129 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> W(N);
    int sum = 0;
    for(int i = 0; i < N; i++){
        cin >> W[i];
        sum += W[i];
    }

    int min_diff = 10000;
    int sum1 = 0;
    for(int i = 0; i < N; i++){
        sum1 += W[i];
        int sum2 = sum - sum1;
        if(abs(sum1 - sum2) < 0) break;
        if(abs(sum1 - sum2) < min_diff) min_diff = abs(sum1 - sum2);       
    }
    cout << min_diff << endl;
}
