#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b, c;
    cout << "Enter three numbers ";
    cin >> a >> b >> c;

    if (a > b && a > b)
    {
        cout << "A is greatest of them all";
    }
    else if (b > a && b > c)
    {
        cout << "B is greatest of them all";
    }
    else if (c > a && c > b)
    {
        cout << "C is greatest of them all";
    }
}
