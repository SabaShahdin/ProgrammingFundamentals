#include <iostream>
using namespace std;

main()
{
    int cars[5][5] = { {10, 7, 12, 10, 4},
                       {18, 11, 15, 17, 2},
                       {23, 19, 12, 16, 14},
                       {7, 12, 16, 0, 2},
                       {3, 5, 6, 2, 1} };
    int sum  = 0 ;
    /*for (int row = 0 ; row <5 ; row++)
    {
        for (int col = 0 ; col < 5 ; col++ )
        {

            cout<<cars[col][row] <<" \t" ;
        }
        cout <<endl;
    } */
   /*for (int row = 0 ; row < 5 ; row++ )
   {
      sum = sum + cars[row][0];
   }  
   cout << sum; */ 
   for (int row = 0 ; row <5 ; row++)
    {
        for (int col = 0 ; col < 5 ; col++ )
        {
            sum = sum + cars[row][col];
        }    
    }     
    cout <<sum;
}