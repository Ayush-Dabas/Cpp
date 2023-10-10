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

void moveNeg(vector<int> &a)
{
    int low = 0, high = a.size() - 1;
    while (low < high)
    {
        if (a[low] < 0)
        {
            low++;
        }
        else if (a[high] > 0)
        {
            high--;
        }
        else
        {
            swap(a[low], a[high]);
        }
    }
}

int main()
{
    vector<int> a = {1, -4, 2, -6, 3, -7, -89, 0, 45};
    moveNeg(a);
    print(a);
    return 0;
}