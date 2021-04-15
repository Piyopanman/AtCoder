//abc185 a

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    vector <int> array(4);
    cin >> array[0] >> array[1] >> array[2] >> array[3];
    int min = array[0];
    for(int i=0 ; i<4 ; i++){
        if(min > array[i]){
            min = array[i];
        }
    }
    cout << min << endl;
    
}
