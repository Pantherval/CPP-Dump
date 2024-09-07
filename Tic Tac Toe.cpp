#include<iostream>
using namespace std;

int main(){
 char table[3][3],exit;
 int x,y,giliran;
 int a,b,flag,flag2;
 do{
  giliran=0;
  for(a=0;a<3;a++){
   for(b=0;b<3;b++){
    table[a][b]=0;
   }
  }

  do{
   //cetak
   system("cls");
   printf("XO Table\n");
   printf("=-=-=-=-=-=-\n\n");
   printf("    1 2 3\n");
   printf("           \n");
   for(a=0;a<3;a++){
    printf("  %d ",a+1,186);
    for(b=0;b<3;b++){
     if(table[a][b]==0)printf("- ",219);
     else printf("%c ",table[a][b]);
    }
    if(a<2)printf(" \n           \n",186,186,186);
    else printf(" \n           \n\n",186,200,205,205,205,205,205,205,188);
   }

   if(giliran==0){
    printf("\n\n\nPlayer X Turn\n");
   }
   else{
    printf("\n\n\nPlayer O Turn\n");
   }
   printf("+-+-+-+-+-+-+-+-+-\n\n");
   
   //input
   do{
    do{
     x=0;
     printf("X Coordinate[1..3]: ");
     scanf("%d",&x);fflush(stdin);
    }while(x>3||x<1);

    do{
     y=0;
     printf("Y Coordinate[1..3]: ");
     scanf("%d",&y);fflush(stdin);
    }while(y>3||y<1);

    if(table[y-1][x-1]!=0)printf("\nPositions has been filled..\n\n");
   }while(table[y-1][x-1]!=0);
   
   //input table
   if(giliran==0)table[y-1][x-1]='X';
   else table[y-1][x-1]='O';

   //cek
   flag=0;
   flag2=0;
   for(a=0;a<3;a++){
    for(b=0;b<3;b++){
     if(table[a][b]==0){flag=1;}
    }
   }

   for(a=0;a<3;a++){
    if(table[a][0]==table[a][1]&& table[a][1]==table[a][2]){
     if(table[a][1]!=0){flag=0;flag2=1;}
    }
   }
   for(a=0;a<3;a++){
    if(table[0][a]==table[1][a] && table[1][a]==table[2][a]){
     if(table[1][a]!=0){flag=0;flag2=1;}}
   }
   if(table[0][0]==table[1][1]&& table[1][1]==table[2][2]){
    if(table[1][1]){flag2=1;flag=0;}}
   if(table[0][2]==table[1][1]&& table[1][1]==table[2][0]){
    if(table[1][1]){flag=0;flag2=1;}}

   //ubah giliran
   if(giliran==0)giliran=1;
   else giliran=0;
  }while(flag==1);
  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nXO Table\n");
   printf("=-=-=-=-=-=-\n\n");
   printf("    1 2 3\n");
   printf("                      \n");
   for(a=0;a<3;a++){
    printf("  %d ",a+1,186);
    for(b=0;b<3;b++){
     if(table[a][b]==0)printf("%c ",219);
     else printf("%c ",table[a][b]);
    }
    if(a<2)printf(" \n           \n",186,186,186);
    else printf(" \n                      \n\n",186,200,205,205,205,205,205,205,188);
   }

  printf("\n\nGame Over^^\n\n");
  if(flag2==0){
   printf("Game is Draw..\n");
  }
  else{
   if ( giliran == 0 )
    printf("Congratulations,players  \"O\" win!!\n");
   else
    printf("Congratulations,players \"X\" win!!\n");
  }
  printf("\n\n\n");
  do{
   system("pause");
   system("cls");
   printf("You want to repeat this game[y/n]: ");
   scanf("%c",&exit);fflush(stdin);
  }while(exit!='y' && exit != 'n');
 }while(exit!='n');
 printf("\n\n. . .Thanks for playing. . . ");
 getchar();
return 0;
}
