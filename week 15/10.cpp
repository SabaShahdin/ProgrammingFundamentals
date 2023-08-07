#include <iostream>
using namespace std;

main()
{
    int rowSize;

    cout << "Entre row sixe ...";
    cin >> rowSize;
    int arr[rowSize][2];
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 2; col++)
        {
            cout << " Entre elemnts of array...";
            cin >> arr[row][col];
        }
        cout << endl;
    }
    int arr2[rowSize * 2];
    int index = 0;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            arr2[index] = arr[i][j];
            index++;
        }
    }
    // print out the flattened array (optional)
    for (int i = 0; i < rowSize * 2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
}
