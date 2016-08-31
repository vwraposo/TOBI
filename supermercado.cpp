#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int x[1005], y[1005];

int
main () {
    int S, test = 1;
    cin >> S;
    while (S > 0) {
        for (int i = 0; i < S; i++) 
            cin >> x[i] >> y[i];
        sort (x, x+S);
        sort (y, y+S);
        printf ("Teste %d\n", test++);
        printf ("%d %d\n\n", x[S/2], y[S/2]);
        cin >> S;
    }  
    return 0;
}
   
