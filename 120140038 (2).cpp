#include <iostream>
#include <stdlib.h>

using namespace std;

typedef int infotype;
typedef struct TElmtList *address;
typedef struct TElmtList {
    infotype info;
    address next;
} ElmtList;
typedef struct List {
    address first;
    address NewElmt;
};

void CreateEmpty(List *L) {
    (*L).first = NULL;
}

bool IsEmpty(List L) {
    return ((L).first == NULL);
}

address Allocation(infotype x) {
    address NewElmt;
    NewElmt = (ElmtList*) malloc (sizeof(ElmtList));
    NewElmt->info = x;
    NewElmt->next = NULL;
    return NewElmt;
}

void Deallocation(address hapus) {
    free(hapus);
}

void InsertFirst(List *L, infotype x) {
    address NewElmt;
    NewElmt = Allocation(x);
    if (NewElmt != NULL) {
        NewElmt->next = (*L).first;
        (*L).first = NewElmt;
    }
}

void InsertAfter(address *PredElmt, infotype x) {
    address NewElmt;
    NewElmt = Allocation(x);
    if (NewElmt != NULL) {
        NewElmt->next = (*PredElmt)->next;
        (*PredElmt)->next = NewElmt;
    }
}

void InsertLast(List *L, infotype x) {
    if (IsEmpty(*L)) {
        InsertFirst(&(*L), x);
    } else {
        address temp;
        temp = (*L).first;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        InsertAfter(&temp, x);
    }
}

void DeleteFirst(List *L, infotype *hapus) {
    if (!IsEmpty(*L)) {
        address temp;
        temp = (*L).first;
        *hapus = temp->info;
        (*L).first = (*L).first->next;
        temp->next = NULL;
        Deallocation(temp);
    }
}

void DeleteAfter(address pred, infotype *hapus) {
    if (pred->next != NULL) {
        address temp;
        temp = pred->next;
        *hapus = temp->info;
        pred->next = temp->next;
        temp->next = NULL;
        Deallocation(temp);
    }
}



void DeleteLast(List *L, infotype *hapus) {
    if (!IsEmpty(*L)) {
        address temp, predTemp;
        predTemp = NULL;
        temp = (*L).first;
        while (temp->next != NULL) {
            predTemp = temp;
            temp = temp->next;
        }
        if (temp == (*L).first) {
            DeleteFirst(&(*L), &(*hapus));
        } else {
            DeleteAfter(predTemp, &(*hapus));
        }
    }
}
void Deletetengah(List *L, infotype *hapus) {
    if (!IsEmpty(*L)) {
        address temp, predTemp;
        predTemp = NULL;
        temp = (*L).first;
        while (temp->next != NULL) {
            predTemp = temp;
            temp = temp->next;
        }
        if (temp == (*L).first) {
            DeleteFirst(&(*L), &(*hapus));
        } else {
            DeleteAfter(predTemp, &(*hapus));
        }
    }
}

void insert_number(List *L, infotype x) {
    if (IsEmpty(*L)) { //kalau list kosong otomatis insert elemen pertama
        InsertFirst(&(*L), x);
    }
    else { //kalau tidak kosong lanjut ke pengecekan lain
        address temp = (*L).first;
        if (temp->next == NULL) { //kalau setelah elemen pertama isinya kosong maka insertnya antara last atau first
            if (x >= temp->info) {
                InsertLast(&(*L), x);
            }
            else {
                InsertFirst(&(*L), x);
            }
        }
        else { //kalau setelah elemen pertama isinya tidak kosong maka ke pengecekan lain
            bool found = false;
            while (!found) {
                if (x >= temp->info) { //apakah x >= temp->info
                    if (temp->next == NULL) { //kalau setelah suatu elemen isinya kosong maka insertnya pasti last
                        InsertLast(&(*L), x);
                        found = true;
                    }
                    else { //kalau setelah suatu elemen tidak kosong maka ke pengecekan lain
                        if (x >= temp->info && x <= temp->next->info) { //kalau x >= temp->info dan x <= temp->next->info(elemen selanjutnya) maka posisi insert after ditemukan
                            InsertAfter(&temp, x);
                            found = true;
                        }
                        else { //kalau kondisi if di atas tidak terpenuhi maka pindah ke elemen selanjutnya
                            temp = temp->next;
                        }
                    }
                }
                else { //jika x tidak >= temp->info maka pasti insert first
                    InsertFirst(&(*L), x);
                    found = true;
                }
            }
        }
    }
}

void Output(List *L) {
    address temp = (*L).first;
    if (temp == NULL) {
        cout << "Data kosong";
    }
    else {
        while (temp != NULL){
            cout << temp->info << " ";
            temp = temp->next ;
        }
    }
    
    cout << endl;
}

int main() {
    List data;
    infotype x;
	infotype hapus;
	address last,temp;
    int pilih,y;

    CreateEmpty(&data);
    
    do{

        cout<<"\n\n\t1. Masukan Data";  
        cout<<"\n\n\t\t2. Hapus Awal";
        cout<<"\n\t\t3. Hapus Akhir";
        cout<<"\n\t\t4. Hapus Tengah";
       
        cout<<"\n\n\t\t5. Keluar \n\n################################################";
        cout<<"\nPilihan Anda : ";cin>>pilih;
        cout<<"################################################\n\n";
    switch(pilih){
    case 1:
        cout<<"Masukkan Data : ";
        cin>>x;
           	insert_number(&data, x);
	    	cout << "Data setelah insert: "; Output(&data);
    break;
    case 2:
        DeleteFirst(&data,&hapus);
        cout << "Data setelah insert: "; Output(&data);
    break;
    case 3:
        DeleteLast(&data,&hapus);
        cout << "Data setelah insert: "; Output(&data);
    break;
    case 4:
			cout << endl << endl << "Setelah Delete After -- ";
    		DeleteAfter(data.first, &hapus);
    		cout << "Hapus = " << hapus << endl;
    		temp = data.first;
    
    	while (temp != NULL) {
        cout << temp->info << " ";

        temp = temp->next;
    }
    
    cout << endl;
    
    
	break;
    }
}
while(pilih!=5);
return 0;

}