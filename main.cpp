#include <stdio.h>
#include <iostream>
#include <Plante.h>

using namespace std;

int main ()
{
    Plante * GentillePlante = new Plante(0, "plante de base", "Une plante gentille", 1);
    GentillePlante->affiche();

    return 0;
}
