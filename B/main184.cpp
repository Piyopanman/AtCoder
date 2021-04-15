//abc184 b

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n, x;
    string results;
    cin >> n >> x >> results;
    for(int i=0 ; i<n ; i++){
        if(results[i] == 'o'){
            x++;
        }else if(results[i] == 'x' && x > 0){
            x--;
        }
    }

    cout << x << endl;

}
