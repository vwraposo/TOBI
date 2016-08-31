#include <cstdio>
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>

using namespace std;

vector < pair <int, int> > v;
int L, I;

int
find (int x) {
    for (int i = 0; i < I; i++) 
        if (v[i].first == x) return 1;
    return 0;
}

int 
verify (int h) {
    for (int i = 1; i < I; i++) {
        int x = (v[i].first + v[i].second * h) % L;
        if (x == 0 ) x = L;
        if (h == 74)
            if (i == 49) {
            cout << v[i].first << v[i].second << endl << h << endl << x << endl;
        }
        if (!find (x)) return 0;
    }
    return 1;
}

int 
main () {
    int hits = INT_MAX;
    cin >> L >> I;
    for (int i = 0; i < I; i++ ) {
        int x, y;
        cin >> x >> y;
        v.push_back (make_pair (x, y));
    }
    cout <<  verify (75) << endl;
    for (int i = 1; i < I; i++) {
        int h = (v[i].first - v[0].first) % L;
        if (verify (h) && h < hits)
            hits = h;
    }
    if (hits == INT_MAX)
        cout << L << endl;
    else if (hits < 0) 
        cout << L + hits << endl;
    else 
        cout << hits << endl;

    return 0;
}
