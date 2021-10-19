#include <iostream>

using namespace std;
/*
void llenarVec(int* vec,int tam){
    for(int i=0; i<tam; i++){
        *(vec+i)=i+1;
    }
}
void mostrarVec(int* vec, int tam){
    for(int i=0; i<tam; i++){
        cout<<*(vec+i)<<'\t';
    }
    cout<<endl;

}
void llenarChar(char* vec,int tam){
    for(int i=0; i<tam; i++){
       cin >> *(vec+i);
    }
}
void mostrarChar(char* vec, int tam){
    for(int i=0; i<tam; i++){
        cout<<*(vec+i)<<'\t';
    }
     cout<<endl;

}
*/
void mostrar(char* vec, int tam){
    for(int i=0; i<tam; i++){
        cout<<*(vec+i)<<'\t';
    }
    cout<<endl;

}
void llenar(char* vec,int tam){
    for(int i=0; i<tam; i++){
       cin >> *(vec+i);
    }
}

void mostrarV1(int* vec, int tam){
    for(int i=0; i<tam; i++){
        cout<<*(vec+i)<<'\t';
    }
    cout<<endl;

}
void llenarV1(int* vec,int tam){
    for(int i=0; i<tam; i++){
       *(vec+i)=i*3;
    }
}
void copiar(char*vec,char*aux, int tam){
    for(int i=0;i<tam;i++){
        *(aux+i)=*(vec+i);
    }
}
void rellenar(char* vec, int tam){
for(int i=0; i++;i<tam){
        cin >> *(vec+i);
        cout<<"Hola"<<endl;
}
}
void remostrar(char* vec, int tam){
for(int i=0; i++;i<tam){
     cout<<"Hola"<<endl;
    cout<<*(vec+i)<<'\t';
}
}
int main()
{/*
    cout<<'\t'<<"PRIMER PROGRAMA APUNTADORES"<<endl;

    cout<<'\t'<<"Esto es un entero"<<endl;
    int a=6;
    int* pa=&a;
    int** xpa=&pa;
    cout<<"a: "<<'\t'<<a<<'\t'<<"pa:"<<'\t'<<pa<<'\t'<<"*pa: "<<'\t'<<*pa<<'\t'<<"xpa:"<<'\t'<<xpa<<'\t'<<"*xpa:"<<'\t'<<*xpa<<'\t'<<"**xpa:"<<'\t'<<**xpa<<endl;


    cout<<'\t'<<"Esto es un entero short"<<endl;

    short int b=2;
    short int* pb=&b;
    short int** xpb=&pb;
    bool K=0;
    bool Q= 0;
    cout<<b<<'\t'<<pb<<'\t'<<xpb<<'\t'<<K<<'\t'<<Q<<endl;

    cout<<'\t'<<"Esto es un char"<<endl;

    cout<<'\t'<<"Esto es un vector de char"<<endl;
    cout<<'\t'<<"Esto es un vector de in"<<endl;

    cout<<'\t'<<"Esto es una matriz de int"<<endl;
    cout<<'\t'<<"Esto es una matriz"<<endl;

*/

/*int vec[5];
llenarVec(vec,5);
char vech[5];
llenarChar(vech,5);
mostrarVec(vec,5);
mostrarChar(vech,5);
*/
 int n=3;
int* vec1= new int[n];
llenarV1(vec1,n);
char* vec=new char[n];
llenar(vec,n);
mostrar(vec,n);
delete vec1;
mostrarV1(vec1,n);


n++;
char* aux=new char[n];
cout<<aux[0]<<endl;
cout<<aux[1]<<endl;
cout<<aux[2]<<endl;
copiar(vec,aux,n);
cout<<aux[0]<<endl;
cout<<aux[1]<<endl;
cout<<aux[2]<<endl;
cout<<aux[3]<<endl;

vec=aux;

cout<<aux[0]<<endl;
cout<<aux[1]<<endl;
cout<<aux[2]<<endl;

rellenar(vec,n);
remostrar(vec,n);
delete aux;
    return 0;


}
