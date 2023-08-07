#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "entre size of the array....";
    cin >> size;
    int array[size];
    int array2[size];
    int largest = 100;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre elements of array...";
        cin >> array[idx];
    }
    for (int idx2 = 0; idx2 < size; idx2++)
    {
        for (int idx1 = idx2 + 1; idx1 < size; idx1++)
        {
            if (array[idx2] > array[idx1])
            {
                int temp;
                temp = array[idx2];           //temp = a
                array[idx2] = array[idx1];    //a = b
                array[idx1] = temp;           //b = temp
            }
        }
    }
     for (int idx2= 0; idx2 < size; idx2++)
    {
     cout << array[idx2] << endl;
    }
}
