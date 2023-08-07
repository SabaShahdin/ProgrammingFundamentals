#include <iostream>
using namespace std;

main()
{
    int a[7] = {6, 3, -2, 5, -8, 2, -2};
    int largest = 0;
    /* for(int i = 0 ; i<8 ; i++)
     {
         cout <<"Entre elemnts of array";
         cin >> array[i];
     }*/
        for (int j = 0; j < 7; j++)
        {
            if (a[j] >= 0 && a[j + 1] >= 0 && a[j] > a[j + 1])
            {
                // Swap if adjacent elements are non-negative and not in order
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            else{
                continue;
            }
        }
        for (int i = 0; i < 7; i++)
        {
            cout << a[i] << "     ";
        }

} //[2, 3, -2, 5, -8, 6, -2]
