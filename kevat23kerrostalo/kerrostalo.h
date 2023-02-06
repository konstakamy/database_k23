#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"
#include "kerros.h"


class kerrostalo
{
public:
    kerrostalo();
    double laskeKulutus(double);
private:
    katutaso eka;
    kerros toka;
    kerros kolmas;
};

#endif // KERROSTALO_H
