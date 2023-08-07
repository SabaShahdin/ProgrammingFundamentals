#include <iostream>
using namespace std;
void rotaateArray(int array[], int array2[], int size, int rotate);
void rotateArray(int array[], int size, int rotate);
main()
{
    int size = 9;
    int size2 = size;
    int rotate;
    int array[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array2[size2] = {};
    cout << "Number of rotations" << endl;
    cin >> rotate;
    rotaateArray(array, array2, size, rotate);
    for (int idx = 0; idx < size2; idx++)
    {
        cout << array2[idx];
    }
    cout << endl;
    rotateArray(array, size, rotate);

    for (int idx = 0; idx < size; idx++)
    {
        cout << array[idx];
    }
}
// outplace
void rotaateArray(int array[], int array2[], int size, int rotate)
{

    for (int idx = 0; idx <= size - rotate; idx++)
    {
        array2[idx] = array[idx + rotate];
    }
    for (int idx = 0; idx < rotate; idx++)
    {
        array2[idx + (size - rotate)] = array[idx];
    }
}
// inplace
void rotateArray(int array[], int size, int rotate)
{
    for (int idx = 0; idx < size - rotate; idx++)
    {
        array[idx + (size - rotate)] = array[idx];
        array[idx] = array[idx + rotate];
        array[idx] = array[idx - size - rotate];
    }
}
/*int temp[];
for(int i=0 ; i<rotae ; i++)
{
    tep[i] = arr[i];
}
for(int idx = 0 ; idx < size - rotate ; idx++)
{
     array[idx] = array[idx + rotate];
}
for(int i=0 ; i<rotae ; i++)
{
    array[idx + (size - rotate)] =  array[idx];
}
for(int i=0 ; i<rotae ; i++)
{
    array[idx + (size - rotate)] =  temp[idx];
}*/