#include <iostream>

#include <fstream>



using namespace std;



struct sPersona{

 string nombre;

 int edad;

 char sexo;

};

int main(){



  ifstream flujoEntrada("Libro1.csv",ios::in);

  const int T=10;

  sPersona arreglo[T];

/*

  // Lectura del archivo linea por linea

  string cadena;

  while(!flujoEntrada.eof()){

   getline(flujoEntrada,cadena);

   cout << cadena << endl;

  }

*/

/* Tarea: Leer desde un archivo csv los valores de cada linea y separarlos

  para poder almacenar cada valor en un campo de la estructura sPersona

*/



  int n=0;

  string aux;

  while(!flujoEntrada.eof()){

   getline(flujoEntrada,arreglo[n].nombre,';');

   if(!flujoEntrada.eof()){

    getline(flujoEntrada,aux,';');

    arreglo[n].edad=stoi(aux,0,10);

    getline(flujoEntrada,aux,'\n');

    arreglo[n].sexo=aux[0];

    n++;

   }

  }



  for (int i=0;i<n;i++ )

  cout << arreglo[i].nombre << '\t' << arreglo[i].edad << '\t' << arreglo[i].sexo <<endl;







  return 0;

}
