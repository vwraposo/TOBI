#include <cstdio>
#include <iostream>
#include <algorithm>
#define MAX 101

using namespace std;

int main () {
	int n, k;
	char c[MAX];
	string lista[MAX];
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		scanf ("%s", c);
		lista[i] = c;
	}
	sort (lista+1, lista+1+n);
	cout << lista[k] << endl;

	return 0;
}