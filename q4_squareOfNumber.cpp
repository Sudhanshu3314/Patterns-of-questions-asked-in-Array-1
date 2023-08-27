/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given a vector arr[] sorted in increasing order.Return an array of squares of each number sorted in increasing order.Where size of vector 1 < size < 101

Input : arr = [0,1,2,3]
Output : arr = [0,1,4,9]

Input : arr = [-5,-4,-3,-2,-1]
Output : arr = [ 1, 4, 9, 16, 25]

Input : arr = [ -4 , -3 , -1 , 0 , 2 , 10 ]
Output : arr = [0 , 1, 4, 9 ,16, 100]
Date = /07/2023   */

#include <bits/stdc++.h>
using namespace std;

void squareSorted(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    vector<int> ans;

    while (left_ptr <= right_ptr)
    {
        if (abs(v[left_ptr]) > abs(v[right_ptr]))
        {
            ans.push_back(v[left_ptr] * v[left_ptr]);
            left_ptr++;
        }
        else
        {
            ans.push_back(v[right_ptr] * v[right_ptr]);
            right_ptr--;
        }
    }

    reverse(ans.begin(), ans.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (i == 0)
            cout << "{ " << ans[i] << ", ";
        if (i > 0 && i != v.size() - 1)
            cout << ans[i] << ", ";
        if (i == v.size() - 1)
            cout << ans[i] << " } ";
    }
}

int main()
{

    vector<int> vec{-4, -3, -1, 0, 2, 5, 10};

    squareSorted(vec);

    cout << endl;
    return 0;
}