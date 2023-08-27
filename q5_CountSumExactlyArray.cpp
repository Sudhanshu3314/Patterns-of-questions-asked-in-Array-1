/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given a vector arr[] sorted in increasing order of size n and an integer x , find the number of unique pairs that exists in the array whose absolute sum is exactly x
Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void countPairsSumEqualTox(vector<int> &vec, int &userValue)
{
    int left_ptr = 0;
    int right_ptr = vec.size() - 1;
    int count = 0;

    while (left_ptr <= right_ptr)
    {
        if (abs(vec[left_ptr] + vec[right_ptr]) > userValue)
        {
            right_ptr--;
        }
        else if (abs(vec[left_ptr] + vec[right_ptr]) < userValue)
        {
            left_ptr++;
        }
        else if (abs(vec[left_ptr] + vec[right_ptr]) == userValue)
        {
            cout << ++count << ") " << vec[left_ptr++] << " + " << vec[right_ptr--] << " = " << userValue << endl;
        }
    }

    cout << "The total No. of unique pairs of the array are " << count << endl ;
}

int main()
{

    vector<int> vec{0, 1, 3, 4, 5, 6, 7};

    int x;
    cout << "\nEnter Value of x : ";
    cin >> x;

    countPairsSumEqualTox(vec, x);

    cout << endl;
    return 0;
}