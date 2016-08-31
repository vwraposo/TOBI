#include <cstdio>
#include <iostream>
#include <algorithm>
#define MAX 101

using namespace std;

int paises[MAX];
int medalhas[MAX];

bool compare (int x, int y){
	if (medalhas[x] > medalhas[y]) return true;
	if (medalhas[x]==medalhas[y])
		if (x < y) return true;
	return false;
}

int main () {
	int n, m, o, p, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		paises[i]=i;
	for (int i = 0; i < m; i++){
		cin >> o >> p >> b;
		medalhas[o]++;
		medalhas[p]++;
		medalhas[b]++; 
	}
	sort (paises+1, paises+1+n, compare);
	for (int i = 1; i <= n; i++)
		cout << paises[i] << ' ';
	cout << endl;

	return 0;
}