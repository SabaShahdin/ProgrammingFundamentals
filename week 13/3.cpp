#include <iostream>
using namespace std;
string fire (char first , int number);
char matrix[5][5] = {{'.', '.', '*', '*'},
                     {'.', '*', '.', '.', '.'},
                     {'.', '*', '.', '.', '.'},
                     {'.', '*', '.', '.', '.'},
                     {'.', '.', '*', '*', '.'}};

main()
{
    char first;
    char second;
    int number ;
    string takeInput;
    string result ;
    cout << "Entre the location ....";
    cin >> takeInput;
    first = takeInput[0];
    second = takeInput[1];
    number = int(second) - '0';
    result =  fire ( first ,  number);
    cout << result ;

}
string fire (char first , int number)
{
    int rowIndex ;
    string output ;
    if (first == 'A')
    {
        rowIndex = 0 ;
    }
    else if (first == 'B')
    {
        rowIndex = 1 ;
    }
    else if (first == 'C')
    {
        rowIndex = 2 ;
    }
    else if (first == 'D')
    {
        rowIndex = 3 ;
    }
    else if (first == 'E')
    {
        rowIndex = 4 ;
    }
    if(matrix[rowIndex][number] == '.')
   {
      output =  "Splash";
   }
   else
   {
      output =  "Boom";
   }
   return output ;
 }