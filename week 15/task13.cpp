#include <iostream>
using namespace std;

main()
{
    int rowSize;
    int colSize;
    cout << " entre size of row";
    cin >> rowSize;
    cout << "entre size of col";
    cin >> colSize;
    float matrix[rowSize][colSize] = {{0.5, 0.5, 0.0},
                                      { 0.2, 0.5, 0.3 },
                                      { 0.1, 0.2, 0.7 }};
   /*cout << " Entre elemnts of Array";
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cin >> matrix[rowSize][colSize];
        }
        cout << endl;
    }*/
    if (rowSize == colSize)
    {
        for (int row = 0; row < rowSize; row++)
        {
            float sum = 0;
            for (int col = 0; col < colSize; col++)
            {
                sum = sum + matrix[row][col];
            }
            for (int col1 = 0; col1 < colSize; col1++)
            {
                if ((matrix[row][col1] >= 0.0 || matrix[row][col1] <= 1.0) && sum == 1.0)
                {
                    cout << " yes";
                }
            }
        }
    }
}