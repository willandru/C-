#include <iostream>

using namespace std;
int** crearMatriz(int f, int c){
    int**m=new int*[f];
    for(int i=0; i<f;i++){
        *(m+i)=new int[c];
    }
    return m;
}

void llenarMatriz(int**m, int f, int c){
    int cont=0;
    for(int i=0; i<f;i++){
        for(int j=0; j<c; j++){
            *(*(m+i)+j)=cont;
            cont++;
        }
    }
}
void mostrarMatriz(int**m, int f, int c){
    for(int i=0; i<f;i++){
        for(int j=0; j<c; j++){
            cout<<*(*(m+i)+j)<<'\t';
        }
        cout<<endl;
    }
}
int main()
{
    cout << "Esta es la matriz 4x4 con los numeros del 0-15" << endl;
    int f=10;
    int c=10;
    int**m=crearMatriz(f,c);
    llenarMatriz(m,f,c);
    mostrarMatriz(m,f,c);

}
