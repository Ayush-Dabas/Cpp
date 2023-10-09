#include <bits/stdc++.h>
using namespace std;

// Reverse the array
void reverse(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i], a[n - 1 - i]);
    }
}

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    reverse(a);
    print(a);

    return 0;
}