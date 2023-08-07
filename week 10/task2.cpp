
#include <iostream>
using namespace std;
int numberOfProgress(int run[], int size);
main()
{
    int size;
    int progress;
    cout << "entre number of week for which you want to calculate progress....";
    cin >> size;
    int run[size];
    for (int idx = 0; idx < size; idx++)
    {
        cout << "entre the run for " << idx + 1 << "  week ";
        cin >> run[idx];
    }
    progress = numberOfProgress(run, size);
    cout << "There are  " << progress << " progress day";
}
int numberOfProgress(int run[], int size)
{
    int progress = 0;
    for (int idx = 0; idx < size - 1; idx++)
    {
        if (run[idx + 1] > run[idx])
        {
            progress = progress + 1;
        }
    }
    return progress ; 
}
