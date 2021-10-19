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
    /*sPersona persona;
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
    }*/
    sPersona persona;
    sPersona personaAux;
    fstream entrada("registros.bin", ios::in|ios::out|ios::binary);
    fstream entradaAux("registros.bin", ios::in|ios::out|ios::binary);

    entrada.seekg(0,ios::end);
    int nr= entrada.tellg()/sizeof(sPersona);

                entrada.seekg(0,ios::beg);
                for(int i=0;i<nr;i++){
                    entrada.read((char*)&persona,sizeof(sPersona));
                    cout<<persona.nombre <<'\t'<<persona.edad<<'\t'<<persona.sexo<<endl;
                }

    for(int i=0; i<nr-1;i++)
    {
    entrada.seekg(i*sizeof(sPersona),ios::beg);
    entrada.read((char*)&persona,sizeof(sPersona));
    for(int j=i+1;j<nr;j++)
        {
            entradaAux.seekg(j*sizeof(sPersona),ios::beg);
            entradaAux.read((char*)&personaAux,sizeof(sPersona));

            if(persona.edad>personaAux.edad){
                entrada.seekg(i*sizeof(sPersona),ios::beg);
                entrada.write((char*)&personaAux, sizeof(sPersona));
                entrada.seekg(j*sizeof(sPersona),ios::beg);
                entrada.write((char*)&persona, sizeof(sPersona));
            }
        }
    }
    cout<<"\nArchivo ordenado satisfactoriamente¡"<<endl;
    entrada.seekg(0,ios::beg);
    for(int i=0;i<nr;i++){
        entrada.read((char*)&persona,sizeof(sPersona));
        cout<<persona.nombre <<'\t'<<persona.edad<<'\t'<<persona.sexo<<endl;
    }



    return 0;
}
