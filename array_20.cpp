#include <bits/stdc++.h>
using namespace std;

void rightRotate(vector<int> a, int outOfPlace, int current)
{
    char temp = a[current];
    for (int i = current; i > outOfPlace; i--)
    {
        a[i] = a[i - 1];
    }
    a[outOfPlace] = temp;
}

void print(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

void rearrange(vector<int> &arr)
{
    int outOfPlace = -1;
    for (int index = 0; index < arr.size(); index++)
    {
        if (outOfPlace >= 0)
        {
            if (((arr[index] >= 0) && (arr[outOfPlace] < 0)) || ((arr[index] < 0) && (arr[outOfPlace] >= 0)))
            {
                rightRotate(arr, outOfPlace, index);
                if (index - outOfPlace >= 2)
                {
                    outOfPlace = outOfPlace + 2;
                }
                else
                {
                    outOfPlace = -1;
                }
            }
        }
        if (outOfPlace == -1)
        {
            if (((arr[index] >= 0) && (!(index & 0x01))) || ((arr[index] < 0) && (index & 0x01)))
            {
                outOfPlace = index;
            }
        }
    }
}

int main()
{
    vector<int> a = {1, 2, 3, -4, -1, 4};
    rearrange(a);
    print(a);
    return 0;
}