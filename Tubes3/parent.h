#ifndef PARENT_H_INCLUDED //dll
#define PARENT_H_INCLUDED
#include <iostream>
using namespace std;

struct atlet{
    string nama;
    int usia;
    string negara;
    string posisi;
    int tinggi;
};

typedef struct atlet infoTypeAtlet;
typedef struct elmAtlet * adrAtlet;

struct elmAtlet{
    infoTypeAtlet infoAtlet;
    adrAtlet next;
    adrAtlet prev;
};

struct ListAtlet{
    adrAtlet first;
    adrAtlet last;
};

void createListAtlet(ListAtlet &LA);
adrAtlet newElmAtlet(infoTypeAtlet data);
void insertFirstAtlet(ListAtlet &LA,adrAtlet p);
void showDataAtlet(ListAtlet LA);
adrAtlet findDataAtletByName(ListAtlet LA,string nama);
void deleteLastAtlet(ListAtlet &LA,adrAtlet &p);


#endif // PARENT_H_INCLUDED
