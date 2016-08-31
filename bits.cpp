#include <cstdio>
#include <iostream>

using namespace std;

int 
divide (int *p, int k) {
    int ans = 0;
    while (*p / k > 0) {
        ans+= *p / k;
        *p = *p % k;
    }
    return ans;
}

int 
main () {
    int T, I, J, K, L, test = 1;
    I = J = K = L = 0;
    cin >> T;
    while (T != 0) {
        I = divide (&T, 50);
        J = divide (&T, 10);
        K = divide (&T, 5);
        L = divide (&T, 1);
        printf ("Teste %d\n", test++);
        printf ("%d %d %d %d\n\n", I, J, K, L);
        cin >> T;
    }
    return 0;
}
