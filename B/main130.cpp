//abc130 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> L(N);
    int count = 0;
    for(int i = 0; i < N; i++){
        cin >> L[i];
    }

    for(int i = 0; i < N + 1; i++){
        int position;
        if(i == 0){
            position = 0;
        }else{
            position += L[i-1];
        }

        if(position > X) break;
        count++;
    }

    cout << count << endl;
}
