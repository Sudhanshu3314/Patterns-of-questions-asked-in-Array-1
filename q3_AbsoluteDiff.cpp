/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given a vector arr[] sorted in increasing order of size n and an integer x, Find if there exists a pair in the array whose absolute difference is exactly x.

Given n > 0 which is size > 0

Input : arr =[5,10,15,20,26]  x = 10
Output : Yes

Input : arr = [ 5,6,7,8,9 ]  x = 4
Output : Yes

Input : arr = [ 9,23,45,69,78 ] x = 56
Output : No

Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void absDiffIncreaseVec(vector<int> &vect, int userValue)
{
    int index = 1;
    int left_ptr = vect.size() - 2;
    int right_ptr = vect.size() - 1;

    while (left_ptr >= 0 and right_ptr >= 0)
    {
        if (vect[right_ptr] - vect[left_ptr] > userValue)
        {
            right_ptr--;
            left_ptr = right_ptr - 1;
        }
        else if (vect[right_ptr] - vect[left_ptr] < userValue)
        {
            left_ptr--;
        }
        else
        {
            cout << "YES" << endl;
            cout << vect[right_ptr] << " - " << vect[left_ptr] << " = " << userValue << endl;
            goto endProgram;
        }
    }

    cout << "NO" << endl;
endProgram:
    cout << endl;
}

int main()
{

    vector<int> vec{-10, -7, -3, -1, 5, 10, 17, 20, 26};

    int x;
    cout << "\nEnter Value of x : ";
    cin >> x;

    absDiffIncreaseVec(vec, x);

    cout << endl;
    return 0;
}