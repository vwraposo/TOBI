#include <cstdio>
#include <iostream>

using namespace std;

int 
main () {
    int n, v[100005], ans = 0;
    int ant, pa = 0, r;
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    ant = v[0];
    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }
    for (int i = 1; i < n; i++) {
        if (pa == 0) {
            r = v[i] - ant;
            ant = v[i];
            pa = 1;
            ans++;
        }
        else { 
            if (r != v[i] - ant) 
                pa = 0;
            ant = v[i]; 
        } 
    }
    
    cout << ans << endl;

    return 0;
}
