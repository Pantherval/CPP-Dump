#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct simpul tsimpul;
    struct simpul{
    char huruf;
    tsimpul *next;
    };
    tsimpul *awal = NULL, *akhir = NULL, *data, *hapus, *b1, *b2;

    class link{

    public:
        void sort();
    };

void muncul(){

    b1=awal;
    cout<<"\n DATA AWAL ==> ";
    while(b1!=NULL){
        cout<<b1->huruf;
        b1=b1->next;
        cout<<" ";

    }
}

void tambah_awal(int x){
    data=new simpul;
    data->huruf=x;
    data->next=NULL;
    if(awal==NULL){
        awal=akhir=data;
    }else{
        data->next=awal;
        awal=data;
    }
}

void tambah_akhir(int x){
    data=new simpul;
    data->huruf=x;
    data->next=NULL;
    if(awal==NULL){
        awal=akhir=data;
    }else{
        akhir->next=data;
        akhir=data;
    }
}

void tambah_tengah(int in,int setelah){
    if(awal==NULL){
        cout<<"Maaf Data Kosong...!!!\n";
        getch();
    }else{

        cout<<"Masukkan Data : ";
		cin>>in;
        cout<<"Dimasukkan Setelah : ";
		cin>>setelah;
        b1=awal;
    int ada=0;
    while (b1!=NULL){
        if (b1->huruf == setelah){
        ada++;
        }
    b1 = b1->next;
    }
    if(ada==0)
        cout<<"\n-->Data Yang Di Masukkan Tidak Valid<--\n\n";
    else{
        b1=awal;
        b2=b1->next;
    while(b1->huruf!=setelah){
        b1=b1->next;
        b2=b1->next;
    }
    data=new simpul;
    data->huruf=in;
    b1->next=data;
    if(b1==akhir){
        akhir=data;
    }
    data->next=b2;
    }
} }

void hapus_awal(){
    if(awal==NULL){
        cout<<"Maaf....List Kosong!!!\n";
    getch();
    }else if (awal==akhir){
        hapus=awal;
        awal=NULL;
        akhir=NULL;
    }else{
        hapus=awal;
        awal=awal->next;
    }
}

void hapus_akhir(){
    if(awal==NULL){
        cout<<"Maaf....List Kosong!!!\n";
        getch();
    }else if(awal==akhir){
        hapus=awal;
        awal=NULL;
        akhir=NULL;
    }else{
        b1=awal;
    while(b1->next!=akhir){
        b1=b1->next;
    }
    hapus=akhir;
    b1->next=NULL;
    akhir=b1;
    }
}


void hapus_tengah(char x){
    tsimpul *b;
    int ada=0;
    b=awal;
    if(awal==NULL){
        cout<<"Maaf....List Kosong!!!\n";
        getch(); 
    }else if(b->huruf==x){
    hapus_awal(); 
    }else if(akhir->huruf==x){
    hapus_akhir();
    }else{
    while(b!=NULL){
        if(b->huruf==x){
        ada++;
    }
    b=b->next;
    }
    if(ada==0)
        cout<<"\n-->Data Yang Di Masukkan Tidak Valid<--\n\n";
    else{
        b=awal;
    while(b->next->huruf!=x){
    b=b->next;
    }
    b1=b->next;
    b2=b1->next;
    hapus=b1;
    b->next=b2;
    }
}
}

void link :: sort(){

    if (awal==NULL){
        cout<<"Maaf Data Kosong..!!";
        getch();
    }

    int temp;  
    for(b1=awal;b1!=NULL;b1=b1->next){
        for(b2=b1->next;b2!=NULL;b2=b2->next){
            if(b1->huruf > b2->huruf){
                temp = b1->huruf;
                b1->huruf = b2->huruf;
                b2->huruf= temp;
            }
        }
    }
}

int main(){
    link obj;
    int pilih;
    char lagi,n,nn;
    do{

        cout<<"################################################\n";
        cout<<" PROGRAM SORTING LINKED LIST \n";
        cout<<"################################################\n";
    muncul();
        cout<<"\n\n\t1. Tambah Awal";  
        cout<<"\n\t2. Tambah Akhir";
        cout<<"\n\t3. Tambah Tengah";
        cout<<"\n\n\t\t4. Hapus Awal";
        cout<<"\n\t\t5. Hapus Akhir";
        cout<<"\n\t\t6. Hapus Tengah";
        cout<<"\n\n\t7. Sorting Data";
        cout<<"\n\n\t\t8. Keluar \n\n################################################";
        cout<<"\nPilihan Anda : ";cin>>pilih;
        cout<<"################################################\n\n";
    switch(pilih){
    case 1:
        cout<<"Masukkan Data : ";
        cin>>n;
        tambah_awal(n);
    break;
    case 2:
        cout<<"Masukkan Data : ";
		cin>>n;
        tambah_akhir(n);
    break;
    case 3:
        tambah_tengah(n,nn);
    break;
    case 4:
        hapus_awal();
    break;
    case 5:
        hapus_akhir();
    break;
    case 6:
        cout<<"Masukkan Data yang Ingin Dihapus : "; 
		cin>>nn;
        hapus_tengah(nn);
    break;
    case 7:
        obj.sort();
    break;
    }
}
while(pilih!=8);
}
