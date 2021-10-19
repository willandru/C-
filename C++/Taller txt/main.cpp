#include <iostream>
#include <fstream>
using namespace std;


int main(){

  ifstream flujoEntrada("datos.txt",ios::in);

  string cadena;
  string name;
  int clases;
  int id;
  int id1;
  int id2;
  int id3;
  float nota=0.0;
  float promA=0.0;
  float promB=0.0;
  float promC=0.0;
  string nombre1;
  string nombre2;
  string nombre3;

  while(!flujoEntrada.eof()){
   //linea 1
   getline(flujoEntrada,cadena);
   clases=stoi(cadena);
   //linea 2
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   id1=id;
   getline(flujoEntrada,cadena,',');
   nombre1=cadena;
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promA=nota;
   //linea 3
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   getline(flujoEntrada,cadena,',');
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promA+=nota;
   //linea 4
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   id2=id;
   getline(flujoEntrada,cadena,',');
   nombre2=cadena;
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promB=nota;
   //linea 5
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   getline(flujoEntrada,cadena,',');
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promB+=nota;
   //linea 6
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   getline(flujoEntrada,cadena,',');
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promC= nota;
   //linea 7
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   getline(flujoEntrada,cadena,',');
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promB+=nota;
   //linea 8
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   getline(flujoEntrada,cadena,',');
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promC+=nota;
   //linea 9
   getline(flujoEntrada,cadena,',');
   id= stoi(cadena);
   id3=id;
   getline(flujoEntrada,cadena,',');
   nombre3=cadena;
   getline(flujoEntrada,cadena,'\n');
   nota=stof(cadena);
   promC+=nota;

  }

  promA= promA/2;
  promB= promB/3;
  promC= promC/3;


 ofstream flujoSalida;
 flujoSalida.open("nuevosDatos.txt",ios::out);
 flujoSalida << id1 << ' ' << nombre1 << ' ' << promA<<endl;
 flujoSalida << id2 << ' ' << nombre2 << ' ' << promB<<endl;
 flujoSalida << id3 << ' ' << nombre3 << ' ' << promC<<endl;

 cout<< "Se creo un nuevo archivo de texto con los datos nuevos "<<endl;

  return 0;

}
