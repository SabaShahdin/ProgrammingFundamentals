#include <iostream>
#include <string>
using namespace std;

main()
{
    int size;
    string line;
    cout << " Entre line ...";
    getline(cin, line);
    string answer;
    string result;
    string answer[20];
    for (int idx = 0; idx < line.length(); idx++)
    {
        if (line[idx] != ' ')
        {
            result = result + line[idx];
        }
        answer[idx] = result;
    }
     for (int idx = 0; idx < 20; idx++)
    {
            if (answer[idx] == "anieme" || answer[idx] == "meme" || answer[idx] == "vines" || answer[idx] == "roasts" || answer[idx] == "Danny DeVito")
            {
                cout << "NO!";
            }
            else
            {
                cout << "Safe watching!";
            }
    }
}
