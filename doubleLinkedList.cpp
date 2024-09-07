#include <iostream>
#include <stdlib.h>
using namespace std;

typedef int infotype;
typedef struct TElmtList *address;
typedef struct TElmtList{
    infotype info;
    address next;
    address prev;
} ElmtList;

typedef struct List {
    address first;
    address last;
};

bool IsEmpty(List L){
    return ((L).first == NULL && (L).last == NULL);
}

void CreateEmpty(List *L){
    (*L).first = NULL;
    (*L).last = NULL;
}

void Deallocation(address hapus){
    free(hapus);
}

address Allocation(infotype x){
    address NewElmt;
    NewElmt = (ElmtList*) malloc (sizeof(ElmtList));

    NewElmt->info = x;
    NewElmt->next = NULL;
    NewElmt->prev = NULL;

    return NewElmt;
}

void InsertFirst(List *L, infotype x){
    address NewElmt;
    NewElmt = Allocation(x);


    if(NewElmt != NULL){
        // *L.first mengandung alamat 
        
        NewElmt->next = (*L).first;
        if(IsEmpty(*L)){
            (*L).last = NewElmt;
        } else{
            ((*L).first)->prev = NewElmt;
        }
        (*L).first = NewElmt;
    }
}

void InsertAfter(address *PredElmt, infotype x){
    address NewElmt;
    NewElmt = Allocation(x);

    if(NewElmt != NULL){
        NewElmt->next = (*PredElmt)->next;
        (*PredElmt)->next = NewElmt;
    }
}

void InsertLast(List *L, infotype x){
    if(IsEmpty(*L)){
        InsertFirst(&(*L), x);
    } else {
        address temp;
        temp = (*L).first;
        while (temp->next != NULL){
            temp = temp->next;
        }
        InsertAfter(&temp, x);
    }
}

void DeleteFirst(List *L, infotype *hapus){
    if(!IsEmpty(*L)){
        address temp;
        temp = (*L).first;
        *hapus = temp->info;
        (*L).first = (*L).first->next;
        temp->next = NULL;
        Deallocation(temp);
    }
}

void DeleteAfter(address pred, infotype *hapus){
    if(pred->next != NULL){
        address temp;
        temp = pred->next;
        *hapus = temp->info;
        pred->next = temp->next;
        temp->next = NULL;
        Deallocation(temp);
    }
}

void DeleteLast(List *L, infotype *hapus){
    if(!IsEmpty(*L)){
        address temp, predTemp;
        predTemp = NULL;
        temp = (*L).first;
        while (temp->next != NULL){
            predTemp = temp;
            temp = temp->next;
        }

        if(temp == (*L).first){
            DeleteFirst(&(*L), &(*hapus));
        } else {
            DeleteAfter(predTemp, &(*hapus));
        }
    }
}

void insert_number(List *L, infotype angka){
	// lengkapi prosedur ini
    // sehingga bilangan yang dimasukkan
    // berapapun nilainya akan selalu berurut
}

int main(){
    address temp;
    List data;
    infotype tempHapus;

    CreateEmpty(&data);
	InsertFirst(&data, 5);
	InsertFirst(&data, 23);
	InsertFirst(&data, 46);
	
    insert_number(&data, 19);
    insert_number(&data, 56);
    insert_number(&data, 11);
    insert_number(&data, 38);
	
    temp = data.first;
    while (temp != NULL){
        cout << temp->info << endl;

        temp = temp->next;
    }
}
