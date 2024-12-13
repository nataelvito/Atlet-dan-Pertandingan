#include "relasi.h"

void createListRelasi(ListRelasi &LR){
    LR.first = nullptr;
}
void newElmRelasi(adrRelasi &p){
    p = new elmRelasi;
    p->next = nullptr;
    p->toAtlet = nullptr;
    p->toPertandingan = nullptr;
}
void KoneksiTandingPemain(ListRelasi &LR,ListPertandingan LP,ListAtlet LA, string namaTanding, string namaPemain){
    adrPertandingan p = findDataPertandinganByName(LP,namaTanding);
    adrAtlet a = findDataAtletByName(LA,namaPemain);

    adrRelasi x;
    newElmRelasi(x);
    if(p != nullptr && a != nullptr){
        x->toAtlet = a;
        x->toPertandingan = p;
        if(LR.first == nullptr){
            LR.first = x;
        }else{
            x->next = LR.first;
            LR.first = x;
        }
    }else{
        cout << "Data Tidak Ditemukan" << endl;
    }
}
void showRelasi(ListRelasi LR){
    if(LR.first == nullptr){
        cout << "Data tidak ada" << endl;
    }else{
        adrRelasi r = LR.first;
        while(r != nullptr){
            cout << "Nama Atlet : "<< r->toAtlet->infoAtlet.nama << endl;
            cout << "Nama Pertandingan : "<< r->toPertandingan->infoPertandingan.nama << endl;
            r = r->next;
        }
    }
    cout << endl;
}
