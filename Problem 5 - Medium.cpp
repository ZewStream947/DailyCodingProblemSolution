#include <iostream>

using namespace std;

pair<int, int> cons(int a, int b)
{
    return pair<int, int>(a, b);
}

int car(pair<int, int> p)
{
    return p.first;
}

int cdr(pair<int, int> p)
{
    return p.second;
}

int main()
{

    int a, b;

    cin >> a >> b;

    cout << car(cons(a, b)) << ' ' << cdr(cons(a, b));

    return 0;
}