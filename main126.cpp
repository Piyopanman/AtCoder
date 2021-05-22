//abc126 B

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int a =(S[0] - '0') * 10 + S[1] - '0';
    int b = (S[2] - '0') * 10 + S[3] - '0';
    if ((b > 0 && b < 13) && (a > 0 && a < 13)){
        cout << "AMBIGUOUS" << endl;
    }else if (b > 0 && b < 13) {
        cout << "YYMM" << endl;
    }else if (a > 0 && a < 13) {
        cout << "MMYY" << endl;
    }else{
         cout << "NA" << endl;
    }
}
