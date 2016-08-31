#include <cstdio>
#include <iostream>
#include <algorithm>
#define MAX 100000

using namespace std;

int main () {
	int N, v[MAX], K, end = 0 ;
	cin >> N;
	for (int i = 0; i < N; i++) 
		cin >> v[i];
	cin >> K;
	int i = 0, j = N-1;
	while (!end) {
		if (v[i] + v[j] == K) {
			cout << v[i] << ' ' << v[j] << endl;
			return 0;				
		}
		if (v[i] + v[j] > K) j--;
		else i++;
	}
	return 0;
}