#include <cstdio>
#include <iostream>
#include <set>
#include <cstdlib>

using namespace std;

int main () {
    int n, m, x, t = 0, pos1, pos2;
    set <int> nbhd;
    set <int>::iterator it, next;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> x;
        nbhd.insert (x);
    }
    pos1 = 0;
    for (int i = 0; i < m; i++) {
        cin >> x;
        pos2 = 0;
        next = nbhd.find (x);
        for (it = nbhd.begin (); it != next; it ++)
            pos2++;
        t += abs (pos2 - pos1);
        pos1 = pos2; 
    }

    cout << t << endl;

    return 0;
}