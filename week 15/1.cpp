# include <iostream>
using namespace std;
void likeOrDislike(string choice[] , int press);

main()
{
    int press;
    cout <<" Entre number of press";
    cin >> press;
    string choice[press];
    for(int i = 0 ; i < press ; i++)
    {
        cout << "Entre choice ";
        cin >> choice[i];
    }
    likeOrDislike(choice , press);
}
void likeOrDislike(string choice[] , int press)
{
    int count = 0 ;
     int count1 = 0 ;
    for (int i =0 ; i< press ; i++)
    {
       if(choice[i] == "like")
       {
           count ++;
       }
       if(choice[i] == "dislike")
       {
          count1 ++;
        }
        if((choice[i] == "like" && choice[i+1] == "dislike") || (count1 %2 ==0 || count %2 == 0))
        {
            cout << " Nothing";
        }
    }
    if(count %  2 == 0)
    {
        cout << " Noting" <<endl;
    }
    else if(count1 %  2 == 0)
    {
        cout << " Noting" <<endl;
    }
    else if(count %  2 != 0)
    {
        cout << "Like" <<endl;
    }
    else if(count1 %  2 != 0 )
    {
        cout << " dislike" <<endl;
    }
}