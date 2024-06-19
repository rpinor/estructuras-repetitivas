//PINO ROJAS Raul Farid Banchello//
//Contraseña1.cpp//
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main (){
    int i;
    string clave, pwd;
    pwd="123";
    i=0;
    do{
        cout<<"Introduzca su clave: ";
        cin>>clave;
        i=i+1;
        system("cls");
    } while ((clave!=pwd)&&(i<3));
    if (clave!=pwd){
        cout<<"Superaste los 3 intentos permitidos";
    } else {
        cout<<"Bienvenido"<<endl;
        system("pause");
    }
    return 0;
}
