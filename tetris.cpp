#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main () {
	int n = 1, j, x, score, maxi, mini;
	char c[16];
	set< pair <int, string> > info;
	set< pair <int, string> > :: iterator it;
	cin >> j;
	while (j > 0) {
		for (int i = 0; i < j; i++) {
			score = 0;
			maxi = 0;
			mini = 1000; 
			scanf ("%s", c);
			for (int l = 0; l < 12; l++){
				cin >> x;
				score += x;
				maxi = max (x, maxi);
				mini = min (x, mini);
			}
			score -= mini + maxi;
			info.insert (make_pair (-score, c));
		}
		cout << "Teste" << ' ' << n++ << endl;
		int i = 1, iAnt = 1;
		int ant = 1005;
		for (it = info.begin (); it != info.end (); it++) {
			if (- it->first == ant )
				cout << iAnt;
			else { 
				cout << i;
				iAnt = i;
			}
			cout << ' ' << -(it->first) << ' ' << it->second << endl;
			ant = - it->first;
			i++;
		}
		cout << endl;
		info.clear ();
		cin >> j;
	}
	return 0;
}