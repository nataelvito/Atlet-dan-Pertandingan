#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED

#include <iostream>
using namespace std;

struct pertandingan{
    string nama;
    int juara;
    int shoot;
    int gol;
};

typedef struct pertandingan infoTypePertandingan;
typedef struct elmPertandingan * adrPertandingan;

struct elmPertandingan{
    infoTypePertandingan infoPertandingan;
    adrPertandingan next;
};

struct ListPertandingan{
    adrPertandingan first;
};

void createListPertandingan(ListPertandingan &LP);
adrPertandingan newElmPertandingan(infoTypePertandingan data);
void insertFirstPertandingan(ListPertandingan &LP,adrPertandingan p);
void showDataPertandingan(ListPertandingan LP);
adrPertandingan findDataPertandinganByName(ListPertandingan LP,string nama);
void deleteLastPertandingan(ListPertandingan &LP,adrPertandingan &p);

#endif // CHILD_H_INCLUDED
