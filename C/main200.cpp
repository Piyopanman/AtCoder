//abc200 C

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<long long>B(200, 0);
    for(int i=0 ; i<N ; i++){
        cin >> A[i];
        B[A[i]%200]++;
    }
    long long ans = 0;
    for(int i = 0; i < 200; i++){  
        ans += (B[i] * (B[i] - 1)) / 2;
    }

    cout << ans << endl;
   
}

//Ai - Aj の余りが200の倍数　→　Aiを200で割った余りとAjを200で割った余りが一致する