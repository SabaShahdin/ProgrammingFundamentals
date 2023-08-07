#include <iostream>
using namespace std;

main()
{
    int women;
     int men;
     cout <<"Entre women...";
    cin >>women;
    cout <<"Entre men ....";
    cin >>men ;
    string array1[women];
   
    string array2[men];
   
    if (women != men)
    {
        cout << " Invalid information ";
    }
    else
    {
        for (int i = 0; i < women; i++)
        {
            cout << " Entre name of women ....";
            cin >> array1[i];
        }
        for (int i = 0; i < men; i++)
        {
            cout << " Entre name of men ....";
            cin >> array2[i];
        }
    }
        for(int i = 0 ; i < women + men ; i++)
        {
            cout <<array1 [i]<<  ", " << array2[i] << " , ";
        }
    }