#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "entre size of the array..";
    cin >> size;
    string array[size];
     for (int idx = 0; idx < size; idx++)
    {
        cout << "entre the element of array...";
        cin >> array[idx];
    }
    for(int idx2=size-1 ; idx2 >=0 ; idx2--)
    {
        cout<<array[idx2] <<" ";
    }
}