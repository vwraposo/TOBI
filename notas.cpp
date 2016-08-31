#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main () {
    int n, x, maxS = 0, maxF = 0;
    map<int, int> score;
    map<int, int>::iterator  it;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (score.find (x) != score.end ())
            score[x]++;
        else score[x] = 0;    
    }
    for (it = score.begin (); it != score.end (); it++)
        if ((*it).second >= maxF) {
            maxS = (*it).first;
            maxF = (*it).second;
        }
    cout << maxS << endl;

    return 0;
}