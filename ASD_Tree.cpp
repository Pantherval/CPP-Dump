#include <iostream>

typedef int infotype;
typedef struct tNode *addrNode;
typedef struct tNode {
    infotype info;
    addrNode left;
    addrNode right;
} Node;
typedef addrNode BinTree;

/* Selektor */
#define Akar(P) (P)->info
#define Left(P) (P)->left
#define Right(P) (P)->right

#define Nil NULL
BinTree Tree (infotype A, BinTree L, BinTree R);
addrNode AlokNode (infotype X);
void DealokNode (addrNode P);

boolean IsTreeEmpty (BinTree P){
    return (P == Nil);
}

boolean IsTreeOneElmt (BinTree P){
    if (P != Nil){
        return (Left(P) == Nil && Right(P) == Nil);
    }else{
        return false;
    }
}

boolean IsUnerLeft (BinTree P){
    if (P != Nil){
        return (Left(P) != Nil && Right(P) == Nil);
    }else{
        return false;
    }
}

boolean IsUnerRight (BinTree P){
    if (P != Nil){
        return (Left(P) == Nil && Right(P) != Nil);
    }else{
        return false;
    }
}

boolean IsBiner (BinTree P){
    if (P != Nil){
        return (Left(P) != Nil && Right(P) != Nil);
    }else{
        return false;
    }
}

void PreOrder (BinTree P){
    if (IsTreeEmpty(P)){
        
    }else{
        cout << Akar(P);
        PreOrder(Left(P));
        PreOrder(Right(P));
    }
}

void PrintPreorder (BinTree P){
    cout << "(";
    if (!IsTreeEmpty(P)) {
        cout << Akar(P);
        PrintPreorder(Left(P));
        PrintPreorder(Right(P));
    }
    cout << ")";
}

void InOrder (BinTree P){
    if (IsTreeEmpty(P)){
    
    }else{
        InOrder(Left(P));
        cout << Akar(P);
        InOrder(Right(P));
    }
}

void PostOrder (BinTree P){
    if (IsTreeEmpty(P)){

    }else{
        PostOrder(Left(P));
        PostOrder(Right(P));
        cout << Akar(P);
    }
}

int NbElmt (BinTree P){
    if (IsTreeEmpty(P)){
        return 0;
    }else{
        return (1+NbElmt(Left(P))+NbElmt(Right(P)));
    }
}

int NbDaun (BinTree P){
    if (IsTreeOneElmt(P)){
        return 1;
    }else{
        if (IsUnerLeft(P)){
            return (NbDaun(Left(P)));
        }else if (IsUnerRight(P)){
            return (NbDaun(Right(P)));
        }else{
            return (NbDaun(Left(P))+NbDaun(Right(P)));
        }
    }
}

int Tinggi (BinTree P){
    int tleft, tright;
    if (IsTreeEmpty(P)) {
        return 0;
    }else{
        tleft = Tinggi(Left(P));
        tright = Tinggi(Right(P));
        if (tleft > tright){
            return (1 + tleft);
        }else{
            return (1 + tright);
        }
    }
}

void AddDaunTerkiri (BinTree *P, infotype X){
    if (IsTreeEmpty(*P)){
        *P = Tree(X,Nil,Nil);
    }else{
        AddDaunTerkiri(&(Left(*P)),X);
    }
}

void DelDaunTerkiri (BinTree *P, infotype *X){
    addrNode PDel;
    if (IsTreeOneElmt(*P)){
        *X = Akar(*P);
        PDel = *P;
        *P = Nil;
        DealokNode(PDel);
    }else{
        if (IsUnerRight(*P)){
            DelDaunTerkiri(&(Right(*P)),&(*X));
        }else{
            DelDaunTerkiri(&(Left(*P)),&(*X));
        }
    }
}

List MakeListPreorder (BinTree P){
    List ltemp;
    if (IsTreeEmpty(P)){
        return Nil;
    }else{
        InsVFirst(&ltemp,Akar(P));
        if (ltemp != Nil){
            return (Concat(ltemp,Concat(MakeListPreorder(Left(P)),
            MakeListPreorder(Right(P)))));
        }else{
            return Nil;
        }
    }
}

boolean SearchTree (BinTree P, infotype X){
	if (IsTreeEmpty(P)){
		return false;
	}else{
		if (Akar(P) == X){
			return true;
		}else{
			return (SearchTree(Left(P),X) || SearchTree(Right(P),X));
		}
	}
}

boolean IsSkewLeft (BinTree P){
	if (IsTreeEmpty(P)){
		return true;
	}else{
		if (IsUnerLeft(P)){
			return IsSkewLeft(Left(P));
		}else{
			return false;
		}
	}
}

boolean IsSkewRight (BinTree P){
	if (IsTreeEmpty(P)){
		return true;
	}else{
		if (IsUnerRight(P)) {
			return IsSkewRight(Right(P));
		}else{
			return false;
		}
	}
}

int Level (BinTree P, infotype X){
	if (Akar(P) == X){
		return 1;
	}else{
		if (SearchTree(Left(P),X)){
			return (1+Level(Left(P),X));
		}else{
			return (1+Level(Right(P),X));
		}
	}
}

void AddDaun (BinTree *P, infotype X, infotype Y, boolean Kiri){
	addrNode PNew;
	if (IsTreeOneElmt(*P)){
		PNew = Tree(Y,Nil,Nil);
		if (Kiri){
			Left(*P) = PNew;
		}else{
			Right(*P) = PNew;
		}
	}else{
		if (SearchTree(Left(*P),X)) {
			AddDaun(&(Left(*P)),X,Y,Kiri);
		}else{
			AddDaun(&(Right(*P)),X,Y,Kiri);
		}
	}
}

void DelDaun (BinTree *P, infotype X){
	addrNode PDel;
	if (IsTreeOneElmt(*P)){
		if (Akar(*P) == X){
			PDel = *P;
			*P = Nil;
			DealokNode(PDel);
		}
	}else{
		if (SearchTree(Left(*P),X)){
			DelDaun(&(Left(*P)),X);
	}
		if (SearchTree(Right(*P),X)){
			DelDaun(&(Right(*P)),X);
		}
	}
}

void DelDaun (BinTree *P, infotype X){
	addrNode PDel;
	if (IsTreeOneElmt(*P)) {
		PDel = *P;
		*P = Nil;
		DealokNode(PDel);
	}else{
		if (IsUnerLeft(P)){
			DelDaun(&(Left(*P)),X);
		}else if (IsUnerRight(P)){
			DelDaun(&(Right(*P)),X);
		}else{
			if (SearchDaun(Left(*P),X)){
				DelDaun(&(Left(*P)),X);
			}
			if (SearchDaun(Right(*P),X)) {
				DelDaun(&(Right(*P)),X);
			}
		}
	}
}

boolean SearchDaun (BinTree P, infotype X){
	if (IsTreeOneElmt(P)){
		return (Akar(P) == X);
	}else{
		if (IsUnerLeft(P)){
			return (SearchDaun(Left(P),X));
		}else if (IsUnerRight(P)){
			return (SearchDaun(Right(P),X));
		}else{
			return (SearchDaun(Left(P),X) || SearchDaun(Right(P),X));
		}
	}
}

List MakeListDaun (BinTree P){
	if (IsTreeEmpty(P)) {
		return Nil;
	}else{
		return (MakeListDaunRecc(P));
	}
}

List MakeListDaunRecc (BinTree P){
	List ll, lr;
	if (IsTreeOneElmt(P)){
		return (Konso(Akar(P),Nil));
	}else{
		if (IsUnerLeft(P)){
			return (MakeListDaunRecc(Left(P)));
		}else if (IsUnerRight(P)){
			return (MakeListDaunRecc(Right(P)));
		}else{ 
			ll = MakeListDaunRecc(Left(P));
			lr = MakeListDaunRecc(Right(P));
			if (ll != Nil && lr != Nil) {
				return (Concat(ll,lr));
			}else{ 
				return Nil; 
			}
		}
	}
}

List Concat (List L1, List L2){
	List LTemp;
	if (IsEmpty(L1)){
		return (Copy(L2));
	}else{
		LTemp = Concat(Next(L1),L2);
		InsVFirst(&LTemp,Info(L1));
		return LTemp;
	}
}

List MakeListLevel (BinTree P, int N){
	if (IsTreeEmpty(P)){
		return Nil;
	}else{
		return MakeListLevelRecc(P,N);
	}
}

List MakeListLevelRecc (BinTree P, int N){
	List ll, lr;
	if (N == 1){
		return (Konso(Akar(P),Nil));
	}else{
		if (IsUnerLeft(P)){
			return (MakeListLevelRecc(Left(P),N-1));
		}else if (IsUnerRight(P)){
			return (MakeListLevelRecc(Right(P),N-1));
		}else{
			ll = MakeListLevelRecc(Left(P),N-1);
			lr = MakeListLevelRecc(Right(P),N-1);
			if (ll != Nil && lr != Nil) {
				return (Concat(ll,lr));
			}else{ 
				return Nil; 
			}
		}
	}
}



int main{
    int NbElmt (BinTree P);
    int NbDaun (BinTree P);
}
