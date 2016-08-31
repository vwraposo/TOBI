#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct comp {
    int ini, fim;
};

typedef struct comp compromisso;

bool 
compara (compromisso a, compromisso b) {
    return a.fim < b.fim;
}

int 
main () {
    int ans, n;
    compromisso v[10000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v[i].ini = x;
        v[i].fim = y;
    }
    sort (v, v+n, compara);
    int i = 0;
    while (i < n) {
        int now;
        now = v[i].fim;
        ans++;
        while (i < n && v[i].ini < now) i++;
    }
    printf ("%d\n", ans);
    return 0;
}  
