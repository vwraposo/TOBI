#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN = 1e5+10;

int main () {
    int n, k, mini;
    int v[MAXN];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort (v, v + n);
    mini = v[ n - k - 1] - v[0];
    for (int i = 1; i <= k; i++) {
        mini = min (mini, v[n - k - 1 + i] - v[i]);
    }
    cout << mini << endl;

    return 0;
}
