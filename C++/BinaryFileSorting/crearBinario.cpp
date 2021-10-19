#include <iostream>
#include <fstream>
using namespace std;

struct sPersona{
char nombre[30];
int edad;
char sexo;
};

int main()
{
    sPersona persona;
    ofstream salida("registros.bin", ios::out|ios::binary);
    for(int i=0; i<3;i++){
            cout << "Ingrese el "<<i+1<<" nombre"<< endl;
        cin.getline(persona.nombre,30,'\n');//Estoy poniendo una cadena de caracteres en la estructura, desde el teclado.
            cout << "Ingrese la edad "<<i+1 << endl;
        cin>>persona.edad;
            cout << "Ingrese el sexo "<<i+1<< endl;
        cin>>persona.sexo;
        cin.ignore(1);
        salida.write((char*)&persona, sizeof(sPersona));
    }


    return 0;
}
