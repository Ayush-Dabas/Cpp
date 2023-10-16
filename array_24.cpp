#include <bits/stdc++.h>
using namespace std;

void findLongestConsequtiveSubsequence(vector<int> arr)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < arr.size(); i++)
    {
        pq.push(arr[i]);
    }

    int prev = pq.top();
    pq.pop();
    int counter = 1;
    int maximumLength = 1;
    while (!pq.empty())
    {
        if (pq.top() - prev > 1)
        {
            counter = 1;
            prev = pq.top();
            pq.pop();
        }
        else if (pq.top() - prev == 0)
        {
            prev = pq.top();
            pq.pop();
        }
        else
        {
            counter++;
            prev = pq.top();
            pq.pop();
        }
        maximumLength = max(maximumLength, counter);
    }

    cout << "Maximum longest consecutive subsequence : " << maximumLength << "\n";
}

int main()
{
    vector<int> arr = {1, 9, 3, 10, 4, 20, 2};
    findLongestConsequtiveSubsequence(arr);
    return 0;
}