//================================{ Soal 1 }===================================
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

    CreateEmpty(&data);
    while (true) {
    	cout << "Masukkan x: "; cin >> x;
    	if (x != -999) {
    		insert_number(&data, x);
	    	cout << "Data setelah insert: "; Output(&data);
		}
		else {
			break;
		}
    }
    
    return 0;
}
//================================{ Soal 2 }=======================================

#include <iostream>
#include <stdlib.h>
using namespace std;
struct data{
	int nim;
	string nama;
	string no;
};
class Node {
	public:
   		data isi;
		Node *next;
};

void insertAfter(Node* prev_node, data new_data){
    
    if (prev_node == NULL){
        cout<<"Tidak menerima inputan NULL";
        return;
    }
    Node* new_node = new Node();
    new_node->isi = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void append(Node** head_ref, data new_data){
    
    Node* new_node = new Node();
    Node *last = *head_ref; 
    new_node->isi = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void deleteNode(Node** head_ref, int key){
     
    Node* temp = *head_ref;
    Node* prev = NULL;
     
    if (temp != NULL && temp->isi.nim == key){
        *head_ref = temp->next;
        delete temp;           
        return;
    }else{
    while (temp != NULL && temp->isi.nim != key){
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
 
    prev->next = temp->next;
 
    delete temp;
    }
}

void printList(Node *node){
	int i=1;
	node=node->next;
    while (node != NULL){
        cout<<i<<".Nama         :"<<node->isi.nama<<endl
        	<<"  NIM          :"<<node->isi.nim<<endl
        	<<"  ID           :"<<node->isi.no<<endl;
        cout<<"\n";i++;
        node = node->next;
    }
}
struct Node* head = NULL;

int main(){
	
	int n=0;
	int loc=0;
	Node* a=new Node();
	Node* b=new Node();
	cout<<"Masukan jumlah Mahasiswa: ";
	cin>>n;
	string dummy;
	getline(cin,dummy);
	for(int i=0;i<n;i++){
		data antri;
		cout<<i+1<<".Nama         :";
		getline(cin,antri.nama);
		cout<<"  NIM          :";
		cin>>antri.nim;
		cout<<"  ID           :";	
		getline(cin,dummy);
		getline(cin,antri.no);
		append(&a,antri);
	}
	cout<<"jumlah Mahasiswa yang tidak hadir: ";
	cin>>n;
	for(int i=0;i<n;i++){
		int nim=0;
		cout<<i+1<<".NIM  : ";
		cin>>nim;
		deleteNode(&a, nim);
	}
   cout<<"Mahasiswa yang Hadir : "<<endl;
   printList(a);
   return 0;
}















//Adi Sulaksono_120140038_ASD RA