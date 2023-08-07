#include <iostream>
using namespace std;
bool isTranspose(int array[][4]);
void swap(int array[][4]);
main()
{
    int array[4][4];
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << " Entre elemnts of array...";
            cin >> array[row][col];
        }
        cout << endl;
    }
    bool flag = isTranspose(array);
    if (flag == true)
    {
        cout << "yes";
       swap(  array);
    }
    else
    {
        cout << "No";
    }
}
bool isTranspose(int array[][4])
{
    bool flag = true;
    for (int row = 0; row < 4; row++)
    {
        for (int col = row +1; col < 4; col++)
        {
            if (array[row][col] != 0)
            {
                flag == false;
            }
        }
    }
    return flag;
}
void swap(int array[][4])
{
    int matrix [4][4];
        for (int row = 0; row < 4; row++)
        {
            for (int col = row ; col < 4; col++)
            {
                matrix[row][col] = array[col][row];
                matrix[col][row] = array[col][row];

             }
             cout << endl;
        }
         for (int row = 0; row < 4; row++)
        {
            for (int col = 0; col < 4; col++)
            {
                cout << matrix[row][col] ;
             }
             cout << endl;
        }
        }
