#include <cstdlib>
#include <iostream>
#include <cmath>
#include<fstream>
using namespace std;

void gaussspl(){
	int n, m;
	float A;
	cout << "Masukkan banyak variabel : ";
	cin >> n;
	cout << "Masukkan banyak persamaan : ";
	cin >> m;
	float ruaskiri[m][n+1];
	float ruaskanan[m];
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout <<"B["<<i+1<<"] : ";
				cin >> ruaskiri[i][j];
			}else{
				cout << "A" << "["<<i+1<<"]["<<j+1<<"] : ";
				cin >> ruaskiri[i][j];	
			}
		}
		cout <<endl;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout<<" = "<<ruaskiri[i][j]<<endl;
			}else{
				cout << ruaskiri[i][j]<<"x"<<j+1<<"  ";
			}
		}
		cout<<endl;
	}
	cout << "\n matriks augmented "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n+1;j++){
			cout << ruaskiri[i][j]<<"  ";
		}
		cout <<endl;
	}
	cout <<"Proses OBE matriks augmented";
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			A = ruaskiri[j][i] / ruaskiri[i][i];
			for(int k=0; k<n+1;k++){
				ruaskiri[j][k] = ruaskiri[j][k] - A*ruaskiri[i][k];
			}
		}
	}
		cout <<"\n  \n";
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			cout <<ruaskiri[k][l]<<"  ";
		}
		cout<< ruaskiri[k][n]<<"  ";
		cout <<"\n  \n";
	}
	for(int k=0; k<n; k++){
		ruaskanan[k]=ruaskiri[k][n];
	}
	//penghitungan x
	float temp;
	float Z[10];
		
	temp = ruaskiri[m-1][n-1];
	Z[m-1]=ruaskanan[m-1]/temp;
	
	for (int i=(n-2);i>=0;i--){
		temp=ruaskiri[i][i];
		for(int j=i+1; j<n; j++){
			ruaskanan[i] =ruaskanan[i] - (ruaskiri[i][j]*Z[j]);
		}
		Z[i]=ruaskanan[i]/temp;
	}
	cout <<"\n Setelaah pengurutan \n";
	for(int i=0; i<n; i++){
		
		if(isnan(Z[i])){
			cout << "X"<<i+1<<" = "" tidak ada solusi ";
		}
		else{cout << "X"<<i+1<<" = "<<Z[i];
		}	
		cout<<endl;
		
	}
	

}

void gaussjordanspl(){
	int n, m;
	float A;
	cout << "Masukkan banyak variabel : ";
	cin >> n;
	cout << "Masukkan banyak persamaan : ";
	cin >> m;
	float ruaskiri[m][n+1];
	float ruaskanan[m];
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout <<"B["<<i+1<<"] : ";
				cin >> ruaskiri[i][j];
			}else{
				cout << "A" << "["<<i+1<<"]["<<j+1<<"] : ";
				cin >> ruaskiri[i][j];	
			}
		}
		cout <<endl;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout<<" = "<<ruaskiri[i][j]<<endl;
			}else{
				cout << ruaskiri[i][j]<<"X"<<j+1<<"  ";
			}
		}
		cout<<endl;
	}
	cout << "\n matriks augmented "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n+1;j++){
			cout << ruaskiri[i][j]<<"  ";
		}
		cout <<endl;
	}
	for(int k=0; k<n; k++){
		ruaskanan[k]=ruaskiri[k][n];
	}
	//penyelesaian gausjordan
	float temp;
	for(int i=0; i<n; i++){
		cout <<"\nTahap "<<i+1<<endl;
		temp=ruaskiri[i][i];
		for(int j=0; j<n; j++){
			ruaskiri[i][j]=ruaskiri[i][j]/temp;
		}
		ruaskanan[i]=ruaskanan[i]/temp;
		for(int k=0;k<n;k++){
			if(k!=i){
				temp=ruaskiri[k][i];
				for(int j=0;j<n;j++){
					ruaskiri[k][j]= ruaskiri[k][j]-(temp * ruaskiri[i][j]);
				}
				ruaskanan[k]=ruaskanan[k]-(temp*ruaskanan[i]);
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n;j++){
				cout << ruaskiri[i][j]<<"  ";
			}
			cout <<" = "<<ruaskanan[i];
			cout <<endl;
		}
	}
	//tampil matriks
	cout<< "\n   \n";
	for(int i=0; i<n; i++){
		
		if(isnan(ruaskanan[i])){
			cout << "X"<<i+1<<" = "" tidak ada solusi ";
		}
		else{cout << "X"<<i+1<<" = "<<ruaskanan[i];
		}	
		cout<<endl;
		
	}
	
}
void reduksibaris(){
	int n, pangkat=0, temp;
	float A;
	cout << "Masukkan banyak ordo: ";
	cin >> n;
	float matriks[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			cout << "A" << "["<<i+1<<"]["<<j+1<<"] : ";
			cin >> matriks[i][j];			
		}
		cout <<endl;
	}
	cout << "\n matriks augmented "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			cout << matriks[i][j]<<"  ";
		}
		cout <<endl;
	}
	cout <<"Proses OBE matriks augmented";
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			A = matriks[j][i] / matriks[i][i];
			for(int k=0; k<n;k++){
				matriks[j][k] = matriks[j][k] - A*matriks[i][k];
			}
		}
		pangkat++;
	}
		cout <<"\n  \n";
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			cout <<matriks[k][l]<<"  ";
		}
		cout <<"\n  \n";
	}
	
	cout << "Perhitungan determinan"<<endl;
	float determinan = 1;
	float sum;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if(i == j){
				determinan = determinan * matriks[i][j];	
			}
		}
	}
	temp = pow(1,pangkat);
	cout << temp *determinan ;	
}

void splinvers(){
//input
	int n,i,j,k,l;
	cout<<"Masukan ordo :";
	cin>>n;
	float data[20][20];

	for (int i = 1; i <= n; ++i)
	{ for (int j = 1; j <= n; ++j)
	   {cout<<"masukan a["<<i<<"]["<<j<<"]"<<" :";
	   	cin>> data[i][j];
	    }
		
	}

 //Matriks sisi kanan

    for (j=n+1;j<=n+n;j++){

        i=j-n;

        data[i][j]=1;

        }

    for (j=n+1;j<=n+n;j++){

        for (i=1;i<=n;i++)

            if (i!=(j-n)){data[i][j]=0;} 

        }

    //Proses penginversan

    for (i=1;i<=n;i++){

        for (j=1;j<=n+n;j++){

            if (i!=j){
            	data[i][j]=data[i][j]/data[i][i];}

            }

        for (j=1;j<=n+n;j++){

            if (i==j) data[i][j]=1;

            }

        //Penjumlahan kesatu baris element

        for (l=1;l<=n;l++){

            if (i!=l) {

                for (j=i+1;j<=n+n;j++){

                    data[l][j]=data[l][j]-(data[i][j]*data[l][i]);

                    }

                }

            }

        //Pembuat nol disekitar matriks kiri

        for (k=1;k<=n;k++){

            if (i!=k) {

                data[k][i]=0;

                }

            }

        }

    //masukan b
    float Bi[20];
    int m;
    cout<<"masukan jumlah persamaan :";
    cin>>m;
    
    for (int i = 1; i <=m; ++i)
{   cout<<"masukan b"<<i<<" :";
  cin>>Bi[i];
}
//Pencetakan
float hasil[m];

    for (i=1;i<=n;i++){
    	float temp=0,temp2=0;
    	int c=1;
        for (j=n+1;j<=n+n;j++){
        	temp=data[i][j]*Bi[c];
        	temp2=temp2+temp;
        	c++;
		}
           hasil[i]=temp2;
            

        }
        
 for(int i=1; i<=m; i++){
		
		if(isnan(hasil[i])){
			cout << "X"<<i+1<<" = "" tidak ada solusi ";
		}
		else{cout << "X"<<i+1<<" = "<<hasil[i];
		}	
		cout<<endl;
		
	}  


}
void splinverseks(){
//input
	int n,i,j,k,l;
	ifstream baca; //ini buat baca file nya sist 
	float data[20][20];
    baca.open("matriks.txt"); //ini buat ngebuka si file nya sist 
	for (int i = 1; i <= n; ++i)
	{ for (int j = 1; j <= n; ++j)
	   {
	   	baca>> data[i][j];
	    }
		
	}

 //Matriks sisi kanan

    for (j=n+1;j<=n+n;j++){

        i=j-n;

        data[i][j]=1;

        }

    for (j=n+1;j<=n+n;j++){

        for (i=1;i<=n;i++)

            if (i!=(j-n)){data[i][j]=0;} 

        }

    //Proses penginversan

    for (i=1;i<=n;i++){

        for (j=1;j<=n+n;j++){

            if (i!=j){
            	data[i][j]=data[i][j]/data[i][i];}

            }

        for (j=1;j<=n+n;j++){

            if (i==j) data[i][j]=1;

            }

        //Penjumlahan kesatu baris element

        for (l=1;l<=n;l++){

            if (i!=l) {

                for (j=i+1;j<=n+n;j++){

                    data[l][j]=data[l][j]-(data[i][j]*data[l][i]);

                    }

                }

            }

        //Pembuat nol disekitar matriks kiri

        for (k=1;k<=n;k++){

            if (i!=k) {

                data[k][i]=0;

                }

            }

        }
 //nah kan diatas udah dibuka, jadi harus di tutup biar ga laler an :(
    //masukan b
    float Bi[20];
    int m;
    baca.open("b.txt"); //ini buat ngebuka si file nya sist 
    for (int i = 1; i <=m; ++i)
{   
  baca>>Bi[i];
}baca.close();
//Pencetakan
float hasil[m];

    for (i=1;i<=n;i++){
    	float temp=0,temp2=0;
    	int c=1;
        for (j=n+1;j<=n+n;j++){
        	temp=data[i][j]*Bi[c];
        	temp2=temp2+temp;
        	c++;
		}
           hasil[i]=temp2;
            

        }
for(int i=1; i<=m; i++){
		
		if(isnan(hasil[i])){
			cout << "X"<<i+1<<" = "" tidak ada solusi ";
		}
		else{cout << "X"<<i+1<<" = "<<hasil[i];
		}	
		cout<<endl;
		
	}        
     baca.close(); //nah kan diatas udah dibuka, jadi harus di tutup biar ga laler an :(   
}



void invers(){
//input
	int n,i,j,k,l;
	cout<<"Masukan ordo :";
	cin>>n;
	float data[100][100];

	for (int i = 1; i <= n; ++i)
	{ for (int j = 1; j <= n; ++j)
	   {cout<<"masukan a["<<i<<"]["<<j<<"]"<<" :";
	   	cin>> data[i][j];
	    }
		
	}

 //Matriks sisi kanan

    for (j=n+1;j<=n+n;j++){

        i=j-n;

        data[i][j]=1;

        }

    for (j=n+1;j<=n+n;j++){

        for (i=1;i<=n;i++)

            if (i!=(j-n)){data[i][j]=0;} 

        }

    //Proses penginversan

    for (i=1;i<=n;i++){

        for (j=1;j<=n+n;j++){

            if (i!=j){
            	data[i][j]=data[i][j]/data[i][i];}

            }

        for (j=1;j<=n+n;j++){

            if (i==j) data[i][j]=1;

            }

        //Penjumlahan kesatu baris element

        for (l=1;l<=n;l++){

            if (i!=l) {

                for (j=i+1;j<=n+n;j++){

                    data[l][j]=data[l][j]-(data[i][j]*data[l][i]);

                    }

                }

            }

        //Pembuat nol disekitar matriks kiri

        for (k=1;k<=n;k++){

            if (i!=k) {

                data[k][i]=0;

                }

            }

        }

    //Pencetakan

    cout <<"Maka invers dari matriks A adalah : "<<endl;

   

    for (i=1;i<=n;i++){

        for (j=n+1;j<=n+n;j++)

            cout <<"    "<<data[i][j];

            cout <<endl;

        }



}
void inverseks(){
//input


	int n,i,j,k,l;
	ifstream baca; //ini buat baca file nya sist
	ifstream baca1;
	baca1.open("ordo.txt") ;
	baca1>>n;
	float data[100][100];
 
      baca.open("matriks.txt"); //ini buat ngebuka si file nya sist 
    
    
	for (int i = 1; i <= n; ++i)
	{ for (int j = 1; j <= n; ++j)
	   {
	   	baca>> data[i][j];
	    }
		
	}

 //Matriks sisi kanan

    for (j=n+1;j<=n+n;j++){

        i=j-n;

        data[i][j]=1;

        }

    for (j=n+1;j<=n+n;j++){

        for (i=1;i<=n;i++)

            if (i!=(j-n)){data[i][j]=0;} 

        }

    //Proses penginversan

    for (i=1;i<=n;i++){

        for (j=1;j<=n+n;j++){

            if (i!=j){
            	data[i][j]=data[i][j]/data[i][i];}

            }

        for (j=1;j<=n+n;j++){

            if (i==j) data[i][j]=1;

            }

        //Penjumlahan kesatu baris element

        for (l=1;l<=n;l++){

            if (i!=l) {

                for (j=i+1;j<=n+n;j++){

                    data[l][j]=data[l][j]-(data[i][j]*data[l][i]);

                    }

                }

            }

        //Pembuat nol disekitar matriks kiri

        for (k=1;k<=n;k++){

            if (i!=k) {

                data[k][i]=0;

                }

            }

        }

    //Pencetakan

    cout <<"Maka invers dari matriks A adalah : "<<endl;

   

    for (i=1;i<=n;i++){

        for (j=n+1;j<=n+n;j++)

            cout <<"    "<<data[i][j];

            cout <<endl;

        }


baca.close(); //nah kan diatas udah dibuka, jadi harus di tutup biar ga laler an :(
baca1.close();
}

//declare functions
float calcDeterminant (float **matrix,int n);
void cofactor (float **matrix,float **holder,int r, int c, int n);

bool inverseMatrix(float **matrix, float **inverse,int n);

//function calculates the determinant
float calcDeterminant(float **matrix,int n){
    //declare and initalize variables
	int i=0,j=0,sign=1;
    float det=0;
	//for storing cofactors
    float **holder = new float*[n];
    //allocate memory for each row of 2d array
    for (i = 0; i <n; ++i){
    	holder[i] = new float[n];
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
           holder[i][j] = matrix[i][j];
        }
    }
	//matrix contains single element
	if (n==1){
		return matrix[0][0];
	}
	for (int x =0; x<n;x++){
		cofactor(matrix,holder,0,x,n);
		det += (sign* matrix[0][x] * calcDeterminant(holder,n-1));
		sign =(-sign);//alternate sign for next term
	}

	//free memory of array, then clear array to prevent memory errors
	for (int i = 0; i <n; i++){
	    	delete[] holder[i];
	   }
	delete [] holder;
	holder = NULL;

	return det;
}
//function gets the cofactor matrix
void cofactor (float **matrix, float **holder,int r, int c, int n){
    //declare and initalize variables
	int i=0,j=0;
	//loop through each index of matrix
	for(int row =0; row<n; row++){
		for (int col=0; col<n; col++){
			//copy into holder, elements that are not in given row/col
			if(row !=r && col!=c){
				holder[i][j++] = matrix[row][col];
				//row is filled so move to next row index and reset col index
				if (j== n -1){
					j=0;
					i++;
				}
			}
		}
	}
}//end cofactor
void gaussspleks(){
	int n, m;
	float A;
	ifstream baca; //ini buat baca file nya sist
	ifstream baca1;
	ifstream baca3;
	baca3.open("matriks.txt") ;
	baca1.open("ordo.txt") ;
	baca1>>n;
	baca.open("b.txt") ;
	baca>>m;
	float ruaskiri[m][n+1];
	float ruaskanan[m];
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout <<"B["<<i+1<<"] : ";
				baca3 >> ruaskiri[i][j];
			}else{
				cout << "A" << "["<<i+1<<"]["<<j+1<<"] : ";
				baca3 >> ruaskiri[i][j];	
			}
		}
		cout <<endl;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout<<" = "<<ruaskiri[i][j]<<endl;
			}else{
				cout << ruaskiri[i][j]<<"x"<<j+1<<"  ";
			}
		}
		cout<<endl;
	}
	cout << "\n matriks augmented "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n+1;j++){
			cout << ruaskiri[i][j]<<"  ";
		}
		cout <<endl;
	}
	cout <<"Proses OBE matriks augmented";
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			A = ruaskiri[j][i] / ruaskiri[i][i];
			for(int k=0; k<n+1;k++){
				ruaskiri[j][k] = ruaskiri[j][k] - A*ruaskiri[i][k];
			}
		}
	}
		cout <<"\n  \n";
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			cout <<ruaskiri[k][l]<<"  ";
		}
		cout<< ruaskiri[k][n]<<"  ";
		cout <<"\n  \n";
	}
	for(int k=0; k<n; k++){
		ruaskanan[k]=ruaskiri[k][n];
	}
	//penghitungan x
	float temp;
	float Z[10];
		
	temp = ruaskiri[m-1][n-1];
	Z[m-1]=ruaskanan[m-1]/temp;
	
	for (int i=(n-2);i>=0;i--){
		temp=ruaskiri[i][i];
		for(int j=i+1; j<n; j++){
			ruaskanan[i] =ruaskanan[i] - (ruaskiri[i][j]*Z[j]);
		}
		Z[i]=ruaskanan[i]/temp;
	}
	cout <<"\n Setelaah pengurutan \n";
	for(int i=0; i<n; i++){
		
		if(isnan(Z[i])){
			cout << "X"<<i+1<<" = "" tidak ada solusi ";
		}
		else{cout << "X"<<i+1<<" = "<<Z[i];
		}	
		cout<<endl;
		
	}
	baca.close();
	baca1.close();
	baca3.close();

}

void gaussjordanspleks(){
	int n, m;
	float A;
	ifstream baca; //ini buat baca file nya sist
	ifstream baca1;
	ifstream baca3;
	baca3.open("matriks.txt") ;
	baca1.open("ordo.txt") ;
	baca1>>n;
	baca.open("b.txt") ;
	baca>>m;
	float ruaskiri[m][n+1];
	float ruaskanan[m];
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout <<"B["<<i+1<<"] : ";
				baca3 >> ruaskiri[i][j];
			}else{
				cout << "A" << "["<<i+1<<"]["<<j+1<<"] : ";
				baca3 >> ruaskiri[i][j];	
			}
		}
		cout <<endl;
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<=n;j++){
			if(j==n){
				cout<<" = "<<ruaskiri[i][j]<<endl;
			}else{
				cout << ruaskiri[i][j]<<"X"<<j+1<<"  ";
			}
		}
		cout<<endl;
	}
	cout << "\n matriks augmented "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n+1;j++){
			cout << ruaskiri[i][j]<<"  ";
		}
		cout <<endl;
	}
	for(int k=0; k<n; k++){
		ruaskanan[k]=ruaskiri[k][n];
	}
	//penyelesaian gausjordan
	float temp;
	for(int i=0; i<n; i++){
		cout <<"\nTahap "<<i+1<<endl;
		temp=ruaskiri[i][i];
		for(int j=0; j<n; j++){
			ruaskiri[i][j]=ruaskiri[i][j]/temp;
		}
		ruaskanan[i]=ruaskanan[i]/temp;
		for(int k=0;k<n;k++){
			if(k!=i){
				temp=ruaskiri[k][i];
				for(int j=0;j<n;j++){
					ruaskiri[k][j]= ruaskiri[k][j]-(temp * ruaskiri[i][j]);
				}
				ruaskanan[k]=ruaskanan[k]-(temp*ruaskanan[i]);
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n;j++){
				cout << ruaskiri[i][j]<<"  ";
			}
			cout <<" = "<<ruaskanan[i];
			cout <<endl;
		}
	}
	//tampil matriks
	cout<< "\n   \n";
	for(int i=0; i<n; i++){
		
		if(isnan(ruaskanan[i])){
			cout << "X"<<i+1<<" = "" tidak ada solusi ";
		}
		else{cout << "X"<<i+1<<" = "<<ruaskanan[i];
		}	
		cout<<endl;
		
	}
	baca.close();
	baca1.close();
	baca3.close();
}

void reduksibariseks(){
	int n, pangkat=0, temp;
	float A;
	ifstream baca; //ini buat baca file nya sist
	ifstream baca1;
	baca1.open("ordo.txt") ;
	baca1>>n;
	baca.open("matriks.txt") ;

	float matriks[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			cout << "A" << "["<<i+1<<"]["<<j+1<<"] : ";
			baca >> matriks[i][j];			
		}
		cout <<endl;
	}
	cout << "\n matriks augmented "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n;j++){
			cout << matriks[i][j]<<"  ";
		}
		cout <<endl;
	}
	cout <<"Proses OBE matriks augmented";
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			A = matriks[j][i] / matriks[i][i];
			for(int k=0; k<n;k++){
				matriks[j][k] = matriks[j][k] - A*matriks[i][k];
			}
		}
		pangkat++;
	}
		cout <<"\n  \n";
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			cout <<matriks[k][l]<<"  ";
		}
		cout <<"\n  \n";
	}
	
	cout << "Perhitungan determinan"<<endl;
	float determinan = 1;
	float sum;
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			if(i == j){
				determinan = determinan * matriks[i][j];	
			}
		}
	}
	temp = pow(-1,pangkat);
	cout << temp *determinan ;	
}


int main()
{
	int menu,ops,input;
	char nav;
	a:
		 system("cls");
	cout<<"             Menu            \n";
	cout<<" [1] Sistem Persamaan Linear \n";
	cout<<" [2] Determinan              \n";
	cout<<" [3] Matriks balikan         \n";
	cout<<" [4] keluar                  \n";
	
	cin>>menu;
	
	if(menu==1)
	{
		cout<<" [1] eliminasi gauss \n";
		cout<<" [2] eleminasi gauss-jordan\n";
		cout<<" [3] Matriks balikan         \n";
		cout<<" [4] Kaidah cramer                  \n";
		cin>>ops;
		if(ops==1)
		{  
			cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{  gaussspl();
			   cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{gaussspleks();
				cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
		}
		else if(ops==2){
			
			cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{  gaussjordanspl();
			cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{
				gaussjordanspleks();
			cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
		}	
	                  }
	    else if(ops==3){
	    	cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{splinvers();
			cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{
				splinverseks();
				cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
		}
	}
		else if(ops==4){
	    	cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{
				
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
		}
		} 
		             
}

	else if(menu==2){
	cout<<" [1] reduksi baris \n";
	cout<<" [2] ekspansi kofaktor\n";
	cin>>ops;
	if(ops==1){
		cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{    reduksibaris();
			cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{
				reduksibariseks();
				cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
		}
	
	}
	else if(ops==2){
		cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{
				//declare and initialize variables
    int i=0, j=0,n=0;
    float determinant=0;
    //get matrix dimensions
    cout<<"masukan matriks nxn:\n";
    cin>>n;

    // allocate memory for array of pointers
    float **matrix = new float*[n];
   
    //allocate memory for each row of 2d array
    for (i = 0; i <n; ++i)
    	matrix[i] = new float[n];
    
  
    //get array elements
    cout<<"masukan elemen matriks:\n";
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
           cin>>matrix[i][j];
        }
    }
    //print array obtained
    cout<<"\nInput matrix:";
    for(i = 0; i < n; i++){
        cout<<"\n";
        for(j = 0; j < n; j++)
            cout<<matrix[i][j]<<"\t";
    }
    //finding determinant
    determinant = calcDeterminant(matrix,n);
    cout<<"\n\nDeterminant: "<<determinant;

    
    //print resulting matrix
    
    //free the memory that was allocated for each row
   for (i = 0; i <n; ++i){
    	delete [] matrix[i];
   }
  
   
   //free memory of first row
   delete [] matrix;
  

   //clear arrays to prevent memory reference errors
   matrix = NULL;

cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{
				//declare and initialize variables
    int i=0, j=0,n=0;
    float determinant=0;
    //get matrix dimensions
    ifstream baca;
    baca.open("ordo.txt");
    cout<<"masukan matriks nxn:\n";
    baca>>n;

    // allocate memory for array of pointers
    float **matrix = new float*[n];
   
    //allocate memory for each row of 2d array
    for (i = 0; i <n; ++i)
    	matrix[i] = new float[n];
    
  
    //get array elements
    ifstream baca1;
    baca1.open("matriks.txt");
    cout<<"masukan elemen matriks:\n";
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
           baca1>>matrix[i][j];
        }
    }
    //print array obtained
    cout<<"\nInput matrix:";
    for(i = 0; i < n; i++){
        cout<<"\n";
        for(j = 0; j < n; j++)
            cout<<matrix[i][j]<<"\t";
    }
    //finding determinant
    determinant = calcDeterminant(matrix,n);
    cout<<"\n\nDeterminant: "<<determinant;

    
    //print resulting matrix
    
    //free the memory that was allocated for each row
   for (i = 0; i <n; ++i){
    	delete [] matrix[i];
   }
  
   
   //free memory of first row
   delete [] matrix;
  

   //clear arrays to prevent memory reference errors
   matrix = NULL;
	baca.close();
	baca1.close();
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
		}	
	}	
	}
	else if(menu==3){
		cout<<"pilih masukan : \n";
			cout<<"[1] keyboard  : \n";
			cout<<"[2] file      : \n";
			cin>>input;
			if(input==1)
			{ invers();
			cout<<endl;
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
			}
			else{inverseks();
			 cout<<endl;
				
				cout<<"ke menu utama (y/n)";
				cin>>nav;
				if(nav=='y'){goto a;}
				else { return 0 ;}
		}
		
	}
	
	if(menu == 4){exit(0);}

	
/*	switch (menu)
	{
		case 1:
               cout<<"Metode Eliminasi Gauss";
               break;
          case 2:
               
               break;
          case 3:
               
               break;
          case 4:
               
               break;
          default:
               
	}*/
	return 0;
}
