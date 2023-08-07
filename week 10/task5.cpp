#include <iostream>
using namespace std;

int areaOfBox(int cur, int value2, int value3, int size);

main()
{
    int size;
    cout << "entre number of boxes ";
    cin >> size;
    int area[size * 3];
    int answer = 0;

    for (int idx = 0; idx < ((size)*3); idx++)
    {
        cout << "entre elements of the array...";
        cin >> area[idx];
    }
    for (int idx1 = 0; idx1 < ((size)*3); idx1 = idx1 + 3)
    {
        answer = answer + areaOfBox(area[idx1], area[idx1 + 1], area[idx1 + 2], size);
    }
    cout << "sum is ....." << answer;
}
int areaOfBox(int value1, int value2, int value3, int size)
{
    int result;
    result = value1 * value2 * value3;

    return result;
}