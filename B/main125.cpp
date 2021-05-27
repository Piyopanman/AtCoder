//abc125 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> V(N);
    vector<int> C(N);
    int max = -100;
    for(int i = 0; i < N; i++){
        cin >> V[i];
    }
    for(int i = 0; i < N; i++){
        cin >> C[i];
    }

    for(int bit = 0; bit < (1 << N); bit++){
        int X = 0;
        int Y = 0;
        for(int i = 0; i < N; i++){
            if(bit & (1 << i)){
                X += V[i];
                Y += C[i];
            }
        }
        if(X - Y > max) max = X - Y;
    }

    cout << max << endl;
    
}
