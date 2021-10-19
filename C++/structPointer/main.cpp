#include <iostream>

using namespace std;

struct sPersona{
 char* nombre;
 int edad;
 char sexo;
};
void leerDatos(sPersona* x){
   cout <<"Digite el nombre"<<endl;
   x->nombre=new char[30];
   cin.getline(x->nombre, 30,'\n');
   cout<< "Digite la edad"<<endl;
   cin>> x->edad;
   cout<<"Digite el sexo"<<endl;
   cin>> x->sexo;
   cin.ignore(1);
}
void imprimirDatos(sPersona* x, int t)
{
  for(int i=0; i<t; i++){
  cout<<(x+i)->nombre << '\t';
  cout <<(x+i)->sexo <<'\t';
  cout <<(*(x+i)).edad<<endl;
  }

}
int main()
{
  int t=3;
  sPersona* p=new sPersona[t];
  for( int i=0; i<t; i++){
  leerDatos(p+i);
  }
  imprimirDatos(p,t);



}
