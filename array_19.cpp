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

vector<int> intersection(vector<int> a, vector<int> b)
{
    vector<int> temp;
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            temp.push_back(a[i]);
            i++;
            j++;
        }
    }
    return temp;
}

int main()
{
    vector<int> a = {1, 5, 10, 20, 40, 80};
    vector<int> b = {6, 7, 20, 80, 100};
    vector<int> c = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> d = intersection(a, b);
    vector<int> e = intersection(d, c);
    print(e);
    return 0;
}