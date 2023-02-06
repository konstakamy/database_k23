#include "katutaso.h"
#include "asunto.h"
#include "kerrostalo.h"
#include "kerros.h"
#include <iostream>
using namespace std;

int main()
{
    kerrostalo talo;
    cout <<"kerrostalon kulutus = "<<talo.laskeKulutus(1)<<endl;

    return 0;
}

