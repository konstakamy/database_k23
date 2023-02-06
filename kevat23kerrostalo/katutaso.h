#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
class katutaso: public kerros
{
public:
    katutaso();

    virtual void maaritaAsunnot()override;
    virtual double laskeKulutus(double)override;
    asunto as1;
    asunto as2;

};

#endif // KATUTASO_H
