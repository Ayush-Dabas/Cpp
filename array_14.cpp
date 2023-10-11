#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << " {";
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "} ,";
    }
}

void merge(vector<vector<int>> a)
{
    sort(a.begin(), a.end());
    vector<vector<int>> ans;
    for (int i = 0; i < a.size(); i++)
    {
        if (ans.empty() || a[i][0] > ans.back()[1])
        {
            ans.push_back(a[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], a[i][1]);
        }
    }
    print(ans);
}

int main()
{
    vector<vector<int>> a = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    merge(a);
    return 0;
}