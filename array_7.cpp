#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void rotate(vector<int> &a)
{
    int i = 0, j = a.size() - 1;
    while (i != j)
    {
        swap(a[i], a[j]);
        i++;
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    rotate(a);
    print(a);
    return 0;
}