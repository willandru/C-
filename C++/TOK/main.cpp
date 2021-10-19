#include <iostream>
#include <string.h>
#include <iostream>

using namespace std;

void Cambiar_tam_Vector(char**&vecto, int tamano){
char ** aux= new char*[tamano+1];
for(int j=0; j<tamano; j++){
    *(aux+j)= *(vecto+j);
}
delete vecto;
vecto=aux;
}

char** token(char* cadena, char* delimitador){
    int tamano=1;
    char** vector_token = new char*[tamano];
    int tamano_cadena = strlen(cadena);
    int tamano_delimitador = strlen(delimitador);
    int indicador = 0;
    for(int y=0; y < tamano_cadena; y++){
        if(y== tamano_cadena-1){
            tamano += 1;
            Cambiar_tam_Vector(vector_token, tamano);
            *(vector_token + (tamano-2))= cadena+ indicador;
        }
    for(int u = 0; u< tamano_delimitador; u++){
        if(*(cadena+y) == +(delimitador+u)){
            *(cadena+y)='\0''
        }
    }
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
