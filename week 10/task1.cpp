#include <iostream>
using namespace std;
int countLetter(char letter, int size, string array[]);
int countLetter(char letter, string array);
main()
{
    int size;
    cout << "entre size of the array..";
    cin >> size;
    string array[size];
    char letter;
    int numberOfTimes;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre the element of array...";
        cin >> array[idx];
    }
    cout << "entre any letter....";
    cin >> letter;
    int sum = 0;
    string temp;
    for (int idx = 0; idx < size; idx++)
    {
        temp = array[idx];
        sum = sum + countLetter(letter, temp);
    }

    cout << letter << " comes  " << sum << " times " << endl;
}
int countLetter(char letter, string array)
{
    int idx1 = 0;
    int count = 0;
    while (array[idx1] != '\0')
    {
        if (letter == array[idx1])
        {
            count++;
        }
        idx1 = idx1 + 1;
    }
    return count;
}
/*int countLetter(char letter, int size, string array[])
{
    int count = 0;
    string temp;
    for (int idx = 0; idx < size; idx++)
    {
        temp = array[idx];
        int idx1 = 0;
        while (temp[idx1] != '\0')
        {
            if (letter == temp[idx1])
            {
                count++;
            }
            idx1 = idx1 + 1;
        }
    }
    return count;
}*/
// numberOfTimes = countLetter(letter, size, array);
//  cout << letter << " comes  " << numberOfTimes << " times " << endl;
