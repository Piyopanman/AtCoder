//abc057 C

#include <bits/stdc++.h>
#include <string>
using namespace std;

long calc_digit(long num){
    long digit = 0;
    while(num > 0){
        num /= 10;
        digit++;
    }
    return digit;
}

int main() {
    long N;
    long minF = N;
    cin >> N;
    for(long A=1 ; A*A <= N ; A++){
        if(N % A == 0){
            long F = max(calc_digit(A), calc_digit(N / A));
            minF = min(minF, F);
        }
    }
    cout << minF << endl;
}
