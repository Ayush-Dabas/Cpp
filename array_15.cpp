#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

void nextPerm(vector<int> &a)
{
    int breakPoint = -1;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            breakPoint = i;
            break;
        }
    }
    if (breakPoint == -1)
    {
        reverse(a.begin(), a.end());
    }
    for (int i = a.size() - 1; i > breakPoint; i--)
    {
        if (a[i] > a[breakPoint])
        {
            swap(a[i], a[breakPoint]);
            break;
        }
    }
    reverse(a.begin() + breakPoint + 1, a.end());

    print(a);
}

int main()
{
    vector<int> a = {1, 3, 2};
    nextPerm(a);
    return 0;
}