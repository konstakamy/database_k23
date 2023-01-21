#pragma once
#ifndef RANDOMPELI_H
#define RANDOMPELI_H
#include <string>
#include <iostream>
using namespace std;
class randompeli
{
public:
    randompeli(); //constructor
    ~randompeli(); //destructor
    void pelaaPelia(int);
    void arvausMaara (int);

    int maxnum = 0;
    int num = 0;
    int guess = 0;
    int tries = 0;



};



#endif // RANDOMPELI_H
