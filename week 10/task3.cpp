#include <iostream>
using namespace std;
bool checkCondition (int pre , int curr , int next);
main()
{
    int size;
    cout << "entre size of the array..";
    cin >> size;
    int array[size];
    int count = 0;
    int greater[10];
    bool flag;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre " << idx + 1 << " element of array";
        cin >> array[idx];
    }
     for (int idx = 0; idx < size - 1; idx++)
       {
           if ( (array[idx+ 1 ] > array[idx]) && (array[idx+1] > array[idx + 2]))
           {
               bool flag = checkCondition (array[idx] , array [idx+1] , array[idx+2]);
               if(flag == true)
               {
               greater[count] = array[idx + 1];
               count++;
           }
           }
       }
       for (int idx = 0; idx < count; idx++)
       {
           if (count > 0)
           {
               cout << greater[idx];
           }
           else
           {
               cout << "no peak found";
           }
       }
   }
 
bool checkCondition (int pre , int curr , int next)
{
    bool flag = false;
    if(curr> pre && curr > next)
    {
        flag  = true;
    }
    return flag ;
}

/* bool checkInteger(int array[], int size, int greater[])
    {
        int count = 0;
        bool flag = true;
        for (int idx = 0; idx < size - 1; idx++)
        {
            if ((array[idx + 1] > array[idx]) && (array[idx + 1] > array[idx + 2]))
            {
                greater[count] = array[idx + 1];
                count++;
            }
            for (int idx = 0; idx < count; idx++)
            {
                if (count > 0)
                {
                    flag = true;
                }
                else
                {
                    flag = false;
                }
            }
        }
    return flag;
}*/