#include <iostream>
using namespace std;
void sparse(int matrix[][3] , int size);

main()
{
    int size = 3;
    int matrix[size][3] = {{0, 0, 0}, {4, 1, 3}, {2, 3, 4}};
    sparse( matrix , size);

}
void sparse(int matrix[][3] , int size)
{
    int count = 0 ;
    int  spp = (size* 3) / 2 ;
    for(int row = 0 ; row<size ; row++)
    {
        for(int col= 0 ; col < 3 ; col++)
        {
            if(matrix [row][col] == 0) 
            {
                count ++;
            }
        }
    }
    if(count >= spp )
    {
        cout <<"Sparse matrix";
    }
    else
    {
        cout <<"NOt a sparse";
    }
}
