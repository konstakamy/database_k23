#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;


class Chef
{
public:
    Chef();
    ~Chef();
    void Chef1(string);
    void makeSalad(string);
    void makeSoup(string);

protected:
    void makePasta(string);
};

#endif // CHEF_H
