	#include <cstdio>
	#include <iostream>
	#include <cmath>

	using namespace std;

	int main () {
		int n, i = 1, num;
		cin >> n;
		while (n != 0) {
			cout << "Teste" << ' ' << i++ << endl;
			num = pow (2, n);
			cout <<  num - 1 << endl;
			cout << endl;
			cin >> n;
		}

		return 0;
	}