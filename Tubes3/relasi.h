#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include <iostream>
using namespace std;

#include "parent.h"
#include "child.h"

typedef struct elmRelasi * adrRelasi;

struct elmRelasi{
    adrAtlet toAtlet;
    adrPertandingan toPertandingan;
    adrRelasi next;
};

struct ListRelasi{
    adrRelasi first;
};

void createListRelasi(ListRelasi &LR);
void newElmRelasi(adrRelasi &p);
void KoneksiTandingPemain(ListRelasi &LR,ListPertandingan LP,ListAtlet LA, string namaTanding, string namaPemain);
void showRelasi(ListRelasi LR);

#endif // RELASI_H_INCLUDED
