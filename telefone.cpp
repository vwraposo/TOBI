#include <cstdio>
#include <iostream>
#include <map>
#include <ctype.h>

using namespace std;

int 
main () 
{
    map<char,int> dic;
    char c[16];
    int idx = 2;
    for (char i = 'A'; i != 'P'; i ++) {
        dic[i] = idx;
        if (i % 3 == 1) idx = (idx+1)%10;
    }
    dic['P']=dic['Q']=dic['R']=dic['S']=7;
    dic['T']=dic['U']=dic['V']=8;
    dic['W']=dic['X']=dic['Y']=dic['Z']=9;
    scanf ("%s", c);
    int i = 0;
    while (c[i] != '\0') {
        if (c[i] == '-') {
            cout << '-';
            i++;
        }
        else if (isdigit(c[i]))
            cout << c[i++];
        else
            cout << dic[c[i++]];
    }
    cout << endl;


    return 0;
}