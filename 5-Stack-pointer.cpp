#include <iostream>
#include <stdlib.h>
using namespace std;

typedef string infotype;

int tanda = 10;

struct link {
    infotype *top;
    infotype *batas;
    infotype *bawah;
};

void inisial(struct link* ref, infotype* nama) {
    int i = tanda-1;
    ref->top = NULL;
    ref->bawah = nama;
    ref->batas = nama+i;
    *ref->batas = "";
}

void geser(struct link* ref) {
    if (ref->top == ref->batas) {
        return;
    }
    else {
        ref->top++;
    }
}

bool penuh(struct link* ref) {
    return (ref->batas == ref->top);
}

bool kosong(struct link* ref){
  return (ref->top == NULL);
}

void push(struct link* ref, infotype wadah) {
    if (!penuh(ref)) {
      if(kosong(ref)) ref->top = ref->bawah;
      else ref->top ++;
      *(ref->top) = wadah;
    }
    else {
        cout << "Array Penuh" << endl;
    }
}

void pop(struct link* ref) {
    if(!kosong(ref)){
      cout<<*ref->top<<endl;
      if(ref->top != ref->bawah) ref->top--;
      else ref->top = NULL;
    }
    else{
      cout<<"Dah habis!"<<endl;
    }
}

//void cetak(infotype* nama) {
//    if (*nama != "") {
//        int i = tanda-1;
//        while (i >= 0) {
//            if (*(nama+i) != "") {
//                cout << *(nama+i) << endl;
//            }
//            i--;
//        }
//    }
//    else {
//        
//    }
//}

int main() {
    infotype nama_mhs[tanda];
    link data;

    inisial(&data, nama_mhs);
    push(&data, "Yanto");
    push(&data, "Yuli");
    push(&data, "Katno");
    push(&data, "Suwarno");

    pop(&data);
    pop(&data);
    pop(&data);
    pop(&data);
    pop(&data);
    

    //cetak(nama_mhs);

    //cetak(nama_mhs);
}
