#include "kerrostalo.h"
#include "kerros.h"
#include "asunto.h"
#include "katutaso.h"
kerrostalo::kerrostalo()
{
    cout<<"kerrostalo luotu"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();

}

double kerrostalo::laskeKulutus(double h)
{
    return eka.laskeKulutus(h)+ toka.laskeKulutus(h)+kolmas.laskeKulutus(h);

}
