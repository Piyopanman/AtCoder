//abc135 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int count = 0;
    for(int i = 0; i < N; i++){
        int p;
        cin >> p;
        if (p != i + 1) count++;
    }

    if(count <= 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;        
    }
}
