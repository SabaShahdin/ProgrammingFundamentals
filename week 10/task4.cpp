#include <iostream>
using namespace std;
bool isRepeating(int count, int length);

int array[100];

main()
{
    int size;
    bool flag;
    cout << "entre size of the array....";
    cin >> size;
    int array[size];
    int length;
    int count = 0;
    cout << "length of cycles .....";
    cin >> length;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre elemnts of array....";
        cin >> array[idx];
    }
    for (int idx1 = 0; idx1 < (size - 1); idx1++)
    {
         
        if (array[idx1] == array[idx1 + length] && array[idx1 + 1] == array[(idx1+1) + length])
        {
            count++;
        }
    }
    flag = isRepeating(count, length);
    cout << flag;
}
bool isRepeating(int count, int length)
{
    bool flag = false;
    if (count >= length)
    {
        flag = true;
    }
    return flag;
}