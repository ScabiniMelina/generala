#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{int dado[5] ,rep[7],salir,suma1,suma2, tabla1[11],tabla2[11] ,vacio1[11],vacio2[11];
string tiro;
char opcion;
suma1=0;suma2=0;
/**< tiempo */
srand(time(NULL));
/**< tabla asigna 0 a todos los valores */
for( int x=0;x<11;x++){
        tabla1[x]=0;
        tabla2[x]=0;
        vacio2[x]=0;
        vacio1[x]=0;}
for ( int x=0;x<11;x++){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"                                           JUGADOR UNO                                                          "<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Sus dados son : "<<endl;
/**< lee los 5 dados */
for(int x=0;x<=4;x++){
        dado[x]= 1+rand()%6+1-1;
        cout<<dado[x]<<" ";}
cout<<endl<<endl<<endl;
 /**< hace que el usuario elija el dado que quiere cambiar */
for(int x=0;x<=4;x++){
cout<<"Ingrese 1 si desea tirar nuevamente el dado "<<x+1<<endl;
cin>>tiro;
if (tiro == "1"){
        dado[x]=1+rand()%6+1-1;}
cout<<"Sus dados son : "<<endl;

for(int y=0;y<=4;y++){
        cout<<dado[y]<<" ";}
 cout<<endl;}
/**< asigna las repeticiones  de los 5 dados al vector y muestra dados actuales */
for (int x=0;x<=6;x++){
       rep[x]=0;}
cout<<"Ahora sus dados son :"<<endl;
for(int x=0;x<=4;x++){
        cout<<dado[x]<<" ";
        rep[dado[x]]=rep[dado[x]]+1;}
cout<<endl<<endl<<endl;
        salir=0;
while(salir!=1){

cout<<"Elija la opcion en la cual se van a anotar sus puntos "<<endl<<"a = Juego al 1"<<endl<<"b = Juego al 2"<<endl<< "c = Juego al 3"<<endl<<"d = Juego al 4"<<endl<<"e= Juego al 5"<<endl<<"f = Juego al 6"<<endl
<<"g = Juego escalera"<<endl<<"h = Juego full"<<endl <<"i = Juego pocker"<<endl<<"j = Juego generala"<<endl<<"k = Jugada generala real"<<endl;
cin>>opcion;

switch(opcion){
case 'a':/**< 1 */
if(vacio1[0]==0){
         tabla1[0]=1*rep[1];
          vacio1[0]=1;
          salir=1;}
break;
case 'b':/**< 2 */
if(
        vacio1[1]==0){
        tabla1[1]=2*rep[2];
        vacio1[1]=1;
        salir=1;}
break;
case 'c':/**< 3 */
 if(
        vacio1[2]==0 ){
        tabla1[2]=3*rep[3];
        vacio1[2]=1;
        salir=1;}
break;
case 'd':/**< 4 */
  if(vacio1[3]==0 ){
        tabla1[3]=4*rep[4];
        vacio1[3]=1;
        salir=1;}
break;

case 'e':/**< 5 */
if(vacio1[4]==0 ){
        tabla1[4]=5*rep[5];
        vacio1[4]=1;
        salir=1;}
break;
case 'f':/**< 6 */
if(vacio1[5]==0 ){
        tabla1[5]=6*rep[6];
        vacio1[5]=1;
        salir=1;}
break;
case 'g':/**< escalera */
if(vacio1[6]==0){
for(int x=1;x<=2;x++){
    if(rep[x]==1 &&rep[x+1]==1&&rep[x+2]==1&&rep[x+3]==1&&rep[x+4]==1){
        tabla1[6]=20;
        vacio1[6]=1;
        salir=1;}}}
if(vacio1[6]==0){
        tabla1[6]=0;
        salir=1;
        vacio1[6]=1;}
break;
case 'h':/**< full */
if(vacio1[7]==0){
 for (int x=1;x<=6;x++){
         for (int z=1;z<=6;z++){
             if(rep[x]==3 && rep[z]==2&&z!=x){
              tabla1[7]=30;
              vacio1[7]=1;}}}
              salir=1;}
    if(vacio1[7]==0){
    tabla1[7]=0;
    salir=1;
    vacio1[7]=1;
  }
 break;
 case 'i':/**<pocker */
if(vacio1[8]==0){
      for (int x=1;x<=6;x++){
   if (rep[x]==4){
     tabla1[8]=40;
     vacio1[8]=1;
      }}
      salir=1;}
      if(vacio1[8]==0){
    tabla1[8]=0;
     salir=1;
       vacio1[8]=1;
  }
break;
case 'j':/**< generala */
if(vacio1[9]==0){
for (int x=1;x<=6;x++){
   if (rep[x]==5){
     tabla1[9]=50;
     vacio1[9]=1;}}
      salir=1;}
      if(vacio1[9]==0){
        tabla1[9]=0;
     salir=1;
       vacio1[9]=1;}
break;
case 'k':/**< generala real */
if(vacio1[10]==0){
if (rep[1]==5){
    tabla1[10]=60;
    vacio1[10]=1; }
      salir=1;}
 if(vacio1[10]==0){
    tabla1[10]=0;
    salir=1;
    vacio1[10]=1;}
break;
default:
 cout<<"Opcion ya seleccionada o fuera de rango "<<endl;}}
cout<<"------------------------------------------ PUNTOS ----------------------------------------------------------------- "<<endl;
cout<<"OPCION |"<<"CATEGORIA     |"<<"JUGADOR 1   ||"<<" OPCION |"<<"CATEGORIA     |"<<"JUGADOR 2        "<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"a      |"<<"Juego al 1    |"<<tabla1[0]<<"           ||"<<" a      |"<<"Juego al 1    |"<<tabla2[0]<<"     "<<endl;
cout<<"b      |"<<"Juego al 2    |"<<tabla1[1]<<"           ||"<<" b      |"<<"Juego al 2    |"<<tabla2[1]<<"     "<<endl;
cout<<"c      |"<<"Juego al 3    |"<<tabla1[2]<<"           ||"<<" c      |"<<"Juego al 3    |"<<tabla2[2]<<"     "<<endl;
cout<<"d      |"<<"Juego al 4    |"<<tabla1[3]<<"           ||"<<" d      |"<<"Juego al 4    |"<<tabla2[3]<<"     "<<endl;
cout<<"e      |"<<"Juego al 5    |"<<tabla1[4]<<"           ||"<<" e      |"<<"Juego al 5    |"<<tabla2[4]<<"     "<<endl;
cout<<"f      |"<<"Juego al 6    |"<<tabla1[5]<<"           ||"<<" f      |"<<"Juego al 6    |"<<tabla2[5]<<"     "<<endl;
cout<<"g      |"<<"Escalera      |"<<tabla1[6]<<"           ||"<<" g      |"<<"Escalera      |"<<tabla2[6]<<"     "<<endl;
cout<<"h      |"<<"Full          |"<<tabla1[7]<<"           ||"<<" h      |"<<"Full          |"<<tabla2[7]<<"     "<<endl;
cout<<"i      |"<<"Pocker        |"<<tabla1[8]<<"           ||"<<" i      |"<<"Pocker        |"<<tabla2[8]<<"     "<<endl;
cout<<"j      |"<<"Generala      |"<<tabla1[9]<<"           ||"<<" j      |"<<"Generala      |"<<tabla2[9]<<"     "<<endl;
cout<<"k      |"<<"Generala real |"<<tabla1[10]<<"           ||"<<" k      |"<<"Generala real |"<<tabla2[10]<<"     "<<endl;

cout<<endl<<endl<<endl<<endl;

cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"                                           JUGADOR DOS                                                         "<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Sus dados son : "<<endl;
/**< lee los 5 dados */
for(int x=0;x<=4;x++){
dado[x]= 1+rand()%6+1-1;
cout<<dado[x]<<" ";
 }
 cout<<endl<<endl<<endl;
 /**< hace que el usuario elija el dado que quiere cambiar */
for(int x=0;x<=4;x++){
cout<<"Ingrese 1 si desea tirar nuevamente el dado "<<x+1<<endl;
cin>>tiro;
if (tiro == "1"){
    dado[x]=1+rand()%6+1-1;
}cout<<"Sus dados son : "<<endl;

 for(int y=0;y<=4;y++){cout<<dado[y]<<" ";}
 cout<<endl;}
/**< asigna las repeticiones  de los 5 dados al vector y muestra dados actuales */
for (int x=0;x<=6;x++){
       rep[x]=0;}
cout<<"Ahora sus dados son :"<<endl;
for(int x=0;x<=4;x++){
cout<<dado[x]<<" ";
 rep[dado[x]]=rep[dado[x]]+1;}
cout<<endl<<endl<<endl;

salir=0;
while(salir!=1){
cout<<"Elija la opcion en la cual se van a anotar sus puntos "<<endl<<"a = Juego al 1"<<endl<<"b = Juego al 2"<<endl<< "c = Juego al 3"<<endl<<"d = Juego al 4"<<endl<<"e= Juego al 5"<<endl<<"f = Juego al 6"<<endl
<<"g = Juego escalera"<<endl<<"h = Juego full"<<endl <<"i = Juego pocker"<<endl<<"j = Juego generala"<<endl<<"k = Jugada generala real"<<endl;
cin>>opcion;

switch(opcion){
case 'a':/**< 1 */
if(vacio2[0]==0){
 tabla2[0]=1*rep[1];
  vacio2[0]=1;
  salir=1;}
break;
case 'b':/**< 2 */
if(
vacio2[1]==0){
tabla2[1]=2*rep[2];
vacio2[1]=1;
salir=1;}
break;
case 'c':/**< 3 */
 if(
vacio2[2]==0 ){
tabla2[2]=3*rep[3];
vacio2[2]=1;
salir=1;}
break;
case 'd':/**< 4 */
  if(vacio2[3]==0 ){
    tabla2[3]=4*rep[4];
    vacio2[3]=1;
    salir=1;}
break;
case 'e':/**< 5 */
if(vacio2[4]==0 ){
tabla2[4]=5*rep[5];
vacio2[4]=1;
salir=1;}
break;
case 'f':/**< 6 */
if(vacio2[5]==0 ){
tabla2[5]=6*rep[6];
vacio2[5]=1;
salir=1;}
break;
case 'g': /**< escalera */
if(vacio2[6]==0){
for(int x=1;x<=2;x++){
if(rep[x]==1 &&rep[x+1]==1&&rep[x+2]==1&&rep[x+3]==1&&rep[x+4]==1){
tabla2[6]=20;
vacio2[6]=1;
salir=1;}}}
if(vacio2[6]==0){
tabla2[6]=0;
salir=1;
vacio2[6]=1;}
break;
case 'h':/**< full */
if(vacio2[7]==0){
for (int x=1;x<=6;x++){
         for (int z=1;z<=6;z++){
             if(rep[x]==3 && rep[z]==2&&z!=x){
              tabla2[7]=30;
              vacio2[7]=1;}}}
              salir=1;}
    if(vacio2[7]==0){
    tabla2[7]=0;
    salir=1;
    vacio2[7]=1;}
 break;
 case 'i': /**<pocker */
if(vacio2[8]==0){
      for (int x=1;x<=6;x++){
   if (rep[x]==4){
     tabla2[8]=40;
     vacio2[8]=1;
      }}
      salir=1;}
      if(vacio2[8]==0){
    tabla2[8]=0;
     salir=1;
       vacio2[8]=1;}
break;
case 'j':/**< generala */
if(vacio2[9]==0){
for (int x=1;x<=6;x++){
   if (rep[x]==5){
     tabla2[9]=50;
     vacio2[9]=1;}}
      salir=1;}
      if(vacio2[9]==0){
        tabla2[9]=0;
     salir=1;
       vacio2[9]=1;}
break;
case 'k':/**< generala real */
if(vacio2[10]==0){
if (rep[1]==5){
    tabla2[10]=60;
    vacio2[10]=1;}
      salir=1;}
 if(vacio2[10]==0){
    tabla2[10]=0;
    salir=1;
    vacio2[10]=1;}
break;
default:
cout<<"Opcion ya seleccionada o fuera de rango "<<endl;}}
cout<<"------------------------------------------ PUNTOS ----------------------------------------------------------------- "<<endl;
cout<<"OPCION |"<<"CATEGORIA     |"<<"JUGADOR 1   ||"<<" OPCION |"<<"CATEGORIA     |"<<"JUGADOR 2        "<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"a      |"<<"Juego al 1    |"<<tabla1[0]<<"           ||"<<" a      |"<<"Juego al 1    |"<<tabla2[0]<<"     "<<endl;
cout<<"b      |"<<"Juego al 2    |"<<tabla1[1]<<"           ||"<<" b      |"<<"Juego al 2    |"<<tabla2[1]<<"     "<<endl;
cout<<"c      |"<<"Juego al 3    |"<<tabla1[2]<<"           ||"<<" c      |"<<"Juego al 3    |"<<tabla2[2]<<"     "<<endl;
cout<<"d      |"<<"Juego al 4    |"<<tabla1[3]<<"           ||"<<" d      |"<<"Juego al 4    |"<<tabla2[3]<<"     "<<endl;
cout<<"e      |"<<"Juego al 5    |"<<tabla1[4]<<"           ||"<<" e      |"<<"Juego al 5    |"<<tabla2[4]<<"     "<<endl;
cout<<"f      |"<<"Juego al 6    |"<<tabla1[5]<<"           ||"<<" f      |"<<"Juego al 6    |"<<tabla2[5]<<"     "<<endl;
cout<<"g      |"<<"Escalera      |"<<tabla1[6]<<"           ||"<<" g      |"<<"Escalera      |"<<tabla2[6]<<"     "<<endl;
cout<<"h      |"<<"Full          |"<<tabla1[7]<<"           ||"<<" h      |"<<"Full          |"<<tabla2[7]<<"     "<<endl;
cout<<"i      |"<<"Pocker        |"<<tabla1[8]<<"           ||"<<" i      |"<<"Pocker        |"<<tabla2[8]<<"     "<<endl;
cout<<"j      |"<<"Generala      |"<<tabla1[9]<<"           ||"<<" j      |"<<"Generala      |"<<tabla2[9]<<"     "<<endl;
cout<<"k      |"<<"Generala real |"<<tabla1[10]<<"           ||"<<" k      |"<<"Generala real |"<<tabla2[10]<<"     "<<endl;

cout<<endl<<endl<<endl;}
cout<<endl<<endl<<endl;
for (int u=0;u<=10;u++){
    suma1=tabla1[u]+ suma1;
    suma2=tabla2[u] +suma2;}

if (suma1>suma2){
      cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"EL JUGADOR 1 ES EL GANADOR"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;}
if (suma2>suma1){
  cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"EL JUGADOR 2 ES EL GANADOR"<<endl;
}  cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
if (suma1==suma2){
 cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"EMPATE"<<endl;
  cout<<"----------------------------------------------------------------------------------------------------------------------"<<endl;}
return 0;
}

