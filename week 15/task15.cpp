og#include <iostream >
using namespace std;

main()
{
    int matrix[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " entre elemnts of array ..";
            cin >> matrix[i][j];
        }
    }
    bool flag = true;
    int rowNumber;
    int columnNumber;
    cout << " entre row number you want to check ";
    cin >> rowNumber;
    cout << " entre column number ....";
    cin >> columnNumber;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                if (matrix[i][k] != matrix[k][j])
                {
                   flag = false;
                }
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
        
            cout << matrix[i][j];
        }
        cout << endl;
    }
    if (flag == true)
    {
        cout << " yes";
    }
    else
    {
        cout << "No";
    }
}
