/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given a vector arr[] sorted in increasing order of size n and an integer x, Find if there exists a pair in the array whose sum is exactly x.

Given n > 0 which is size > 0

Input : arr =[-1,0,1,2,3]  x = 2
Output : Yes

Input : arr = [ 1,2,3,4 ]  x = 9
Output : No

Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void sortedIncrease(vector<int> &vect, int userValue)
{
    int left_ptr = 0;
    int right_ptr = vect.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (vect[left_ptr] + vect[right_ptr] > userValue )
        {
            right_ptr--;
        }
        else if (vect[left_ptr] + vect[right_ptr] < userValue )
        {
            left_ptr++;
        }
        else if (vect[left_ptr] + vect[right_ptr] == userValue )
        {
            cout << "Yes" << endl;
            cout << vect[left_ptr] << " + " << vect[right_ptr] << " = " << userValue << endl;
            goto endProgram;
        }
    }

    cout << "No" << endl;
endProgram:
    cout << endl;
}

int main()
{

    vector<int> vec{-3, -1, 0, 1, 3, 4, 7};
    int x;
    cout << "Enter value of x : ";
    cin >> x;

    sortedIncrease(vec, x);

    cout << endl;
    return 0;
}