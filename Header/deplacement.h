#if !defined(DEPLACEMENT_H)
#define DEPLACEMENT_H

#include "init.h"
#include "plateau.h"

    int de();
    int verification(int, int, int);
    void deplacement(int, int, int);
    void capture(int, int, int);
    void sortieEcurie(int);
    void checkEcurie(int etat[4], int, int, int);

#endif // DEPLACEMENT_H