//abc057 c

#include <bits/stdc++.h>
#include <string>
using namespace std;

int calc_digit(unsigned num){
    int digit = 0;
    while(num != 0){
        num /= 10;
        digit++;
    }
    return digit;
}

int main() {
    long long N;
    cin >> N;
    int min_f = (1 << 29);
    for(long long A=1 ; A*A <= N ; A++){
        if(N % A == 0){
            long long B = N / A;
            int F = max(calc_digit(A), calc_digit(B));
            min_f = min(min_f, F);
        }
    }

    cout << min_f << endl;

}
