//abc192 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int X;
    cin >> X;
    for(int i=1 ; i<=100 ; i++){
        int current_coin = X + i;
        if(current_coin % 100 == 0){
            cout << i << endl;
        }
    }
}
