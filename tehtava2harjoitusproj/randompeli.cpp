#include "randompeli.h"
#include <iostream>
using namespace std;
#include <ctime>
randompeli::randompeli()
{

}

randompeli::~randompeli()
{

}

void randompeli::arvausMaara(int)
{
    /*int num, guess, tries = 0;
    int maxnum;
    cout << "Give a max number"<<endl;
    cin>> maxnum;
    srand(time(0));
    num = rand() % maxnum + 1;*/
}

void randompeli::pelaaPelia(int)
{
    int num, guess, tries = 0;
    int maxnum;
    cout << "Give a max number"<<endl;
    cin>> maxnum;
    srand(time(0));
    num = rand() % maxnum + 1;



    do
    {
        cout << "guess the number"<<endl;
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "lower"<<endl;
        }
        else if (guess == num)
        {
            cout << guess << " is the correct answer, you got it in "  << tries << " guesses " <<endl;

        }
        else
        {
            cout << "higher"<<endl;
        }


        } while (guess != num);
    system("PAUSE");

        }


