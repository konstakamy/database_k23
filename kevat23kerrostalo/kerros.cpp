#include "kerros.h"
#include "kerrostalo.h"
kerros::kerros()
{
    cout << "kerros luotu"<<endl;
}

void kerros::maaritaAsunnot()
{
    cout << "maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);
    as3.maarita(2,100);
    as4.maarita(2,100);


}





double kerros::laskeKulutus(double h)
{
    return as1.laskeKulutus(h)+as2.laskeKulutus(h)+as3.laskeKulutus(h)+as4.laskeKulutus(h);
}
