#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long

ull factorial(int N)
{

    ull f = 1;
    for (ull i = 2; i <= N; i++)
        f *= i;

    return f;
}

int main()
{
    int n = 20;
    cout << factorial(n) << endl;
    return 0;
}