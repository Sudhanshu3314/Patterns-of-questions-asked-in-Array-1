/* Programmer = Sudhanshu Barnwal
Topic = Assignment Question
Purpose = Given Two vector arr1[] and arr2[] of size m and n sorted in increasing order.Merge two arrays into a single sorted array of size m + n

Input : arr1=[1,2,3]  arr2=[4,5,6]
Output : arr = [1,2,3,4,5]

Input : arr1= [ 2,3,4,5,7]  arr2 = [0,1,10,11]
Output : arr = [0,1,2,3,4,5,6,7,10,11]

Date = 24/07/2023   */

#include <bits/stdc++.h>
using namespace std;

void mergedSortedArray(vector<int> &arr1, vector<int> &arr2, int &sizeOfArr1, int &sizeOfArr2)
{
    int sizeOfArr3 = sizeOfArr1 + sizeOfArr2;
    vector<int> arr3;

    reverse(arr2.begin(), arr2.end());
    for (int i = 0; i < sizeOfArr3; i++)
    {
        if (i < sizeOfArr1)
        {
            arr3.push_back(arr1[i]);
        }
        else
        {
            arr3.push_back(arr2[i - sizeOfArr1]);
        }
    }

    int left_ptr = 0;
    int right_ptr = sizeOfArr3 - 1;

    vector<int> resArr(sizeOfArr3);
    int count = 0;
    while (left_ptr <= right_ptr)
    {
        if (arr3[left_ptr] < arr3[right_ptr])
        {
            resArr[count++] = arr3[left_ptr];
            left_ptr++;
        }
        else
        {
            resArr[count++] = arr3[right_ptr];
            right_ptr--;
        }
    }

    cout << endl ;

    for( int ele : resArr ){
        cout << ele << " " ;
    }
}

int main()
{

    vector<int> arr1{2, 3, 4, 5, 7};
    vector<int> arr2{0, 1, 10, 11};
    int m = arr1.size();
    int n = arr2.size();

    mergedSortedArray(arr1, arr2, m, n);

    cout << endl;
    return 0;
}