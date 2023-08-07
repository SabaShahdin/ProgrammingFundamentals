#include <iostream>
using namespace std;
void mergeArray(int array1[], int array2[], int array3[], int size, int size3);
main()
{
    int size = 4;
    int size3 = 4 ;
    int size2 = size + size;
    int array1[size];
    int array2[size3];
    int array3[size2];
    for (int idx = 0; idx < size; idx++)
    {
        cout << " Entre elemnts of first array.";
        cin >> array1[idx];
    }
    for (int idx = 0; idx < size3; idx++)
    {
        cout << " Entre elemnts of second array.";
        cin >> array2[idx];
    }
    mergeArray(array1, array2, array3, size, size3);
    for (int idx = 0 ; idx < size2 ; idx++)
    {
         cout << array3[idx];
    }
   
}
void mergeArray(int array1[], int array2[], int array3[], int size, int size3)
{
    for (int idx = 0; idx < size ; idx++)
    {
        array3[idx] = array1[idx];
    }
    for (int idx1 = 0 ; idx1 < size3 ; idx1++)
    {
        array3[idx1 + size3] = array2[idx1];
    }
    
}