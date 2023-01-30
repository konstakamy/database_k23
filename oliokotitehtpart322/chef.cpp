#include "chef.h"

Chef::Chef()
{
    Chef::Chef1("");
    cout << "konstruktori"  <<endl;
    Chef::Chef1 ("") ;
    Chef::makeSalad("");
    cout<<endl;
    Chef::Chef1("");
    Chef::makeSoup("");
    Chef::Chef1("");
    Chef::makePasta("");




}

Chef::~Chef()
{
    Chef::Chef1("");
    cout << "destruktori"<<endl;

}

void Chef::Chef1(string)
{
    cout << "Chef Jyrki ";
}


void Chef::makeSalad(string)
{
    cout << "makes salad";
}

void Chef::makeSoup(string)
{
    cout << "makes soup"<<endl;
}

void Chef::makePasta(string)
{
    cout << "makes pasta"<<endl;
}

