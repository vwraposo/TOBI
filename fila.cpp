#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    int n, m, x;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back (x);
    }
    cin >> m;   
    for (int i = 0; i < m; i++) {
        cin >> x;
        v.erase (find(v.begin (), v.end (), x));
    }
    for (int i = 0; i < n - m; i++)
        cout << v[i] << ' ';
    cout << endl;

    return 0;
}