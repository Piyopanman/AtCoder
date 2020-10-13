//abc164

#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int n;
    set<string> s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string ss;
        cin >> ss;
        s.insert(ss);
    }

    cout << s.size() << endl;
}
