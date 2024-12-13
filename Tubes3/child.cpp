#include "child.h"

void createListPertandingan(ListPertandingan &LP){
    LP.first = nullptr;
}

adrPertandingan newElmPertandingan(infoTypePertandingan data){
    adrPertandingan p = new elmPertandingan;
    p->next = nullptr;
    p->infoPertandingan = data;
    return p;
}

void insertFirstPertandingan(ListPertandingan &LP,adrPertandingan p){
    if(LP.first == nullptr){
        LP.first = p;
    }else{
        p->next = LP.first;
        LP.first = p;
    }
}
void showDataPertandingan(ListPertandingan LP){
    adrPertandingan p = LP.first;

    if(LP.first == nullptr){
        cout << "Data Tidak Ada" << endl;
    }else{
        while(p != nullptr){
            cout << "Nama Pertandingan : " << p->infoPertandingan.nama << endl;
            cout << "Juara Pertandingan : " << p->infoPertandingan.juara << endl;
            cout << "Jumlah Tembakan Pertandingan : " << p->infoPertandingan.shoot << endl;
            cout << "Gol Pertandingan : " << p->infoPertandingan.gol << endl;
            p = p->next;
        }
    }
    cout << endl;
}
adrPertandingan findDataPertandinganByName(ListPertandingan LP,string nama){
    adrPertandingan p = LP.first;

    while(p != nullptr && p->infoPertandingan.nama != nama){
        p = p->next;
    }

    return p;

    if(p == nullptr){
        return nullptr;
    }
}

void deleteLastPertandingan(ListPertandingan &LP,adrPertandingan &p){
    if(LP.first == nullptr){
        cout << "Data Kosong";
    }else if(LP.first->next == nullptr){
        p = LP.first;
        LP.first = nullptr;
    }else{
        adrPertandingan r = LP.first;
        adrPertandingan q;
        while(r->next != nullptr){
            q = r;
            r = r->next;
        }
        q->next = nullptr;
    }
}
