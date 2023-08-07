#include <iostream>
using namespace std;

main()
{
    int array[3][5];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << " Entre elemnts of array...";
            cin >> array[row][col];
        }
        cout << endl;
    }
    int colSum = 0;
    int maxCol = 0;
    for (int row = 0; row < 5; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + array[row][col];
        }
        if (sum > colSum)
        {
            colSum = sum;
            maxCol = row;
        }
    }
    for (int col = 0; col < 3; col++)
    {
        int temp = array[0][col];
        array[0][col] = array[maxCol][0];
        array[maxCol][col] = temp;
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
