#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <ctime>
class game
{
public:
    int num, guess, tries = 0;
    int maxnum = 1-10;
    void Play(){
    std::cout << "Give a max number"<<std::endl;
    std::cin>> maxnum;
    srand(time(0));
    num = rand() % maxnum + 1;
    }
};
#endif // GAME_H
