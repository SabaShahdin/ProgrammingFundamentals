#include <iostream>
using namespace std;

int matrix[3][3] = {{1, 0, 0},
                    {0, 1, 0},
                    {0, 0, 1}};
bool identity();
main()
{
    bool flag = identity();
    if (flag == true)
    {
        cout << "Identity Matrix";
    }
    else
    {
        cout << "not an identity. ";
    }
}

bool identity()
{
    bool flag = true;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col && matrix[row][col] != 1)
            {
                flag = false;
            }

            if (row != col && matrix[row][col] != 0)
            {
                flag = false;
            }
        }
    }
    return flag;
}
