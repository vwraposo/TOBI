#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

struct l {
    int x;
    int y;
    int d;
};

typedef struct l lista;

int
distance (int x1, int y1, int x2, int y2)
{
    return abs (x1 - x2) + abs (y1 - y2);
}

int 
candidate (int i, int j, lista v[], int k, int resp[])
{
    for (int l = 0; l < k; l++)
        if (distance (i, j, v[l].x, v[l].y) != v[l].d) return 0;
    resp[0] = i;
    resp [1] = j;
    return 1;
}

int 
main () 
{
    int n, k, count = 0, resp[2], i;
    lista v[105];
    cin >> n >> k;
    for (i = 0; i < k; i++) 
        cin >> v[i].x >> v[i].y >> v[i].d;
    for (i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
                if (candidate (i, j, v, k, resp))
                    count++;
        }
    if (count == 1)
        printf("%d %d\n", resp[0], resp[1]);
    else 
        printf("%d %d\n",-1, -1);
    return 0;
}