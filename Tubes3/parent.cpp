#include "parent.h"

void createListAtlet(ListAtlet &LA){
    LA.first = nullptr;
    LA.last = nullptr;
}

adrAtlet newElmAtlet(infoTypeAtlet data){
    adrAtlet p = new elmAtlet;
    p->infoAtlet = data;
    p->next = nullptr;
    p->prev = nullptr;
    return p;
}

void insertFirstAtlet(ListAtlet &LA,adrAtlet p){
    if(LA.first == nullptr){
        LA.first = p;
    }else{
        p->next = LA.first;
        LA.first->prev = p;
        LA.first = p;
    }
}
void showDataAtlet(ListAtlet LA){
    if(LA.first == nullptr){
        cout << "Data Kosong";
    }else{
        adrAtlet p = LA.first;
        while(p != nullptr){
            cout << "Nama Pemain : " << p->infoAtlet.nama << endl;
            cout << "Usia Pemain : " << p->infoAtlet.usia << endl;
            cout << "Negara Asal Pemain : " << p->infoAtlet.negara << endl;
            cout << "Posisi Pemain : " << p->infoAtlet.posisi << endl;
            cout << "Tinggi Pemain : " << p->infoAtlet.tinggi << endl;
            p=p->next;
        }
    }
    cout << endl;
}
adrAtlet findDataAtletByName(ListAtlet LA,string nama){
    adrAtlet p = LA.first;

    while(p != nullptr && p->infoAtlet.nama != nama){
        p = p->next;
    }
    return p;

    if(p == nullptr){
        return nullptr;
    }
}

void deleteLastAtlet(ListAtlet &LA, adrAtlet &p) {
    if (LA.first == nullptr && LA.last == nullptr) {
        cout << "Data Kosong" << endl;
        p = nullptr;
        return;
    }

    if (LA.first == LA.last) {
        p = LA.first;
        LA.first = nullptr;
        LA.last = nullptr;
    } else {
        p = LA.last;
        LA.last = p->prev;
        LA.last->next = nullptr;
        p->prev = nullptr;
    }
}
