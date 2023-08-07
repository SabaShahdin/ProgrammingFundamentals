#include <iostream>
using namespace std;

main()
{
    int array[3][3];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << " Entre elemnts of array...";
            cin >> array[row][col];
        }
        cout << endl;
    }
    int count = 0;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if((array[row][col] >0  && array[row][col] < 9 ) && array[row][col] != array[row][col])
            {
                cout << "yes";

            }
           if(array[row][col] >=0  &&  array[row][col] > 9 )
            {
                cout << " invalid  ";
            }
            if(array[row][col] == array[row][col])
            {
                count = count + 1;
            }
               
        }
    }
     cout << count << "repeated twice";
}