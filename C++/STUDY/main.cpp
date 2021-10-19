#include <iostream>
#include <string.h>

using namespace std;

void concatenar(char* &cadena1, char* cadena2){
    int t1= strlen(cadena1);
    int t2= strlen(cadena2);
    char* cadena3 = new char[t1+t2+1];
    strcpy(cadena3, cadena1);
    strcpy(cadena3+t1,cadena2);
    delete cadena1;
    cadena1=cadena3;
}
int main()
{
    char* cadena1= new char [7];
    strcpy(cadena1,"Hola ");
    cout <<"Cadena1: "<< cadena1 << endl;
    char* cadena2= new char[7];
    strcpy(cadena2,"Mundo");
    cout <<"Cadena2: "<< cadena2 << endl;
    concatenar(cadena1,cadena2);
    cout <<"CadenaConcat: "<< cadena1 << endl;

}
