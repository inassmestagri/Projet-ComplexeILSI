#include "Complexe.h"
#include <iostream>
using namespace std;

int main()
{
    double a = 5.4;
    double k = 1.2;
    double p = 6.3;

    Complexe* c1 = new Complexe(4, 5);
    Complexe* c2 = new Complexe(1, 6);

    c1->afficher();
    c2->afficher();

    Complexe* c3 = new Complexe(*c1 + *c2);
    Complexe* c4 = new Complexe(*c1 + a);

    c3->afficher();
    c4->afficher();

    Complexe* c5 = new Complexe(*c1 * k);
    Complexe* c6 = new Complexe((*c1) * (*c2));
    Complexe* c7 = new Complexe(*c1 / p);
    Complexe* c8 = new Complexe(*c1 / *c2);

    c5->afficher();
    c6->afficher();
    c7->afficher();
    c8->afficher();

    if (*c1 == *c2)
        cout << "c1 et c2 sont egaux" << endl;
    else
        cout << "c1 et c2 sont differents" << endl;

    if (*c1 != *c2)
        cout << "c1 et c2 sont differents" << endl;
    else
        cout << "c1 et c2 sont egaux" << endl;

    if (*c1 < *c2)
        cout << "Le module de c1 est inferieur au module de c2" << endl;
    else
        cout << "Le module de c1 n'est pas inferieur au module de c2" << endl;

    if (*c1 > *c2)
        cout << "Le module de c1 est superieur au module de c2" << endl;
    else
        cout << "Le module de c1 n'est pas superieur au module de c2" << endl;

    delete c1;
    c1 = nullptr;

    delete c2;
    c2 = nullptr;

    delete c3;
    c3 = nullptr;

    delete c4;
    c4 = nullptr;

    delete c5;
    c5 = nullptr;

    delete c6;
    c6 = nullptr;

    delete c7;
    c7 = nullptr;

    delete c8;
    c8 = nullptr;

    return 0;
}