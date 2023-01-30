#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
using namespace std;


class ItalianChef:public Chef
{
public:
    ItalianChef();
    void ItalianChef1(string);
    void getName(string);
    void makePasta();

private:
    int vesi;
    int jauhot;

};

#endif // ITALIANCHEF_H
