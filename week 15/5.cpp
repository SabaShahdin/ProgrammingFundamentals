#include <iostream>
using namespace std;

main()
{
    int array[3][5];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << " Enter elemnts of array...";
            cin >> array[row][col];
        }
        cout << endl;
    }
    int colSum = 0;
    int maxCol = 0;
    for (int col = 0; col < 5; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + array[row][col];
        }
        if (sum > colSum)
        {
            colSum = sum;
            maxCol = col;
        }
    }
    for (int row = 0; row < 3; row++)
    {
        int temp = array[row][0];
        array[row][0] = array[row][maxCol];
        array[row][maxCol] = temp;
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 5; col++)
        {

            cout<< array[row][col];
        }
        cout << endl;
    }
}
