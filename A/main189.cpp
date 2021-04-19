//abc189 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string c;
    cin >> c;
    if(c[0] == c[1] && c[1] == c[2]){
        cout << "Won" << endl;
    }else{
        cout << "Lost" << endl;
    }
}
