#include <cstdio>
#include <iostream>
#include <stack>
#include <cstring>
#include <stdlib.h>

using namespace std;

stack <char> pilha;

bool compare (char c) ;

int main () {
    int n;
    char c;
    cin >> n;
    c = getc (stdin);
    for (int i = 0; i < n; i++)  {
        c = getc (stdin);
        while (c != '\n') {
            if (!pilha.empty () && compare (c)) pilha.pop ();
            else pilha.push (c);
            c = getc (stdin);
        }
        if (pilha.empty ())
            printf("S\n");
        else {
            printf("N\n");
            while (!pilha.empty ())
                pilha.pop ();
        }
    }

}

bool compare (char c) {
    if (c == '}' && pilha.top () == '{') return true;
    if (c == ')' && pilha.top () == '(') return true;
    if (c == ']' && pilha.top () == '[') return true;
    return false;

}