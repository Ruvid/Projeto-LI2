//
// Created by oliveira on 13/03/20.
//

#include <stdio.h>
#include "imprimeCasa.h"

void imprimeCasa (ESTADO *e, int i, int j) {

    CASA peca;

    peca = e -> tab[i][j];

    switch (peca)
    {
    case BRANCA:
        putchar ('*');
    break;

    case PRETA:
        putchar ('#');
    break;

    default:
        putchar ('.');
    }
}
