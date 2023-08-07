#include <iostream>
#include <fstream>
using namespace std;

void readFile();

main()
{
    readFile();
}
void readFile()
{
    char character = '[';
    char character2 = ']';
    char letter ;
    fstream file;
    file.open("data.txt", ios::in);
    while (!file.eof())
    {
    file >> letter;
    if (letter != character && letter!= character2)
    {
        cout <<letter;
    }
    }
}