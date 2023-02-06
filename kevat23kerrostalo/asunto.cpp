#include "asunto.h"

asunto::asunto()
{
    cout << "asunto luotu "<<endl;

}

void asunto::maarita(int a, int n)
{

    asukasMaara = a;
    neliot = n;
    cout <<"Asunto maaritetty asukkaita= " <<asukasMaara << " nelioita= " <<neliot<<endl;

}

double asunto::laskeKulutus(double h)
{
    return h*asukasMaara*neliot;
   // cout<< "katutason ja perityn kerroksen kulutus, kun hinta=1 on "<<laskeKulutus(6)<<endl;


}
