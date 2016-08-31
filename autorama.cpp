#include <cstdio>
#include <algorithm>
#include <iostream>
#define MAX 101

using namespace std;

int carro[MAX];
int posicao[MAX];
int volta[MAX];
int tmp[MAX];

bool compara (int x, int y) {
    if (volta[x] > volta[y]) return true;
    if (volta[y] > volta[x]) return false;
    if (posicao[x] > posicao[y]) return true;
    if (posicao[y] > posicao[x]) return false;
    if (tmp[x] < tmp[y]) return true;
    return false;
}

int main () {
    int K, N, M, x, y;
    cin >> K >> N >> M;
    for (int i = 1; i <= N; i++)
        carro[i] = i;
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        if (y == posicao[x]+1 || y == posicao[x]+1-K) {
            if (posicao[x] > y) 
                volta[x]++;
            posicao[x] = y;
            tmp[x] = i;
        }
    }
    sort (carro+1, carro+1+N, compara);
    for (int i = 1; i <= N; i++)
        cout << carro[i] << ' ';
    cout << endl;

    return 0;
}
