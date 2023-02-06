#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"
katutaso::katutaso()
{
    cout << "katutaso luotu"<<endl;




}

void katutaso::maaritaAsunnot()
{
    cout << "maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(2,100);
    as2.maarita(2,100);

    kerros::maaritaAsunnot();
   // cout <<"kerrostalon kulutus = "<<katutaso::laskeKulutus(1)<<endl;


}



double katutaso::laskeKulutus(double h)
{
    return kerros::laskeKulutus(h) + as1.laskeKulutus(h)+as2.laskeKulutus(h);
}
