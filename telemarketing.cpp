#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
 
using namespace std;

struct vendedor {
    int tim;
    int clients;
};

vendedor v[1005];

bool 
compare (vendedor x, vendedor y) {
    if (x.tim < y.tim) return true;
    return false;
}

int main () {
    vendedor *menor;
    int n, l, prox;
    scanf ("%d %d", &n, &l);
    menor = v + 1;
    for (int i = 1; i <= l; ++i) {
        scanf ("%d", &prox); 
        menor->tim += prox;
        menor->clients++;
        menor = min_element (v + 1, v + n + 1, compare);
    }
    for (int i = 1; i <= n; i++)
        printf("%d %d\n", i, v[i].clients);

    return 0;
}  
