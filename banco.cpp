#include <cstdio>
#include <algorithm>
#include <iostream> 

using namespace std;

int main () {
	int c[10], numc, n, chegada, duracao, *menor, count = 0;
	cin >> numc >> n;
	for (int i = 0; i < numc; i++)
		c[i] = 0;
	menor = min_element (c, c + numc);
	for (int i = 0; i < n; ++i) {
		cin >> chegada >> duracao;
		if (chegada > *menor)
			*menor += chegada - *menor;
		else if (*menor - chegada > 20 ) count++;
		*menor += duracao;
		menor = min_element (c, c + numc);
	}
	cout << count << endl;

	return 0;
}