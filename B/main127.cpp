//abc127 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int r, D, x;
    cin >> r >> D >> x;
    int prev_x;
    for(int i = 1; i <= 10; i++ ){
        if(i == 1){
            prev_x = r * x - D;
            cout << prev_x << endl;
        }else{
            cout << r * prev_x - D << endl;
            prev_x = r * prev_x - D;
        }
    }
}
