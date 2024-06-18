//PINO ROJAS Raul Farid Banchello//
//Contraseña1.cpp//
#include <iostream>
using namespace std;
int main (){
    string clave, pwd;
    pwd="123";
    do{
        cout<<"Introduzca su clave:";
        cin>>clave;
    } while (clave!=pwd);
    cout<<"Bienvenido"<<endl;
    return 0;
}
