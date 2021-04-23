//abc

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool can_buy = false;
    int min_price = (1 << 30);
    for(int i=0 ; i<N ; i++){
        int A, P, X;
        cin >> A >> P >> X;
        if(X - A > 0 && P < min_price){
            min_price = P;
            can_buy = true;
        }
    }
    if(can_buy){
        cout << min_price << endl;
    }else{
        cout << -1 << endl;
    }
}
