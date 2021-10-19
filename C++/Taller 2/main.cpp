#include <iostream>

using namespace std;
int* crearVector(int N){
    int*v=new int[N];

    return v;
}
int** crearMatriz(int N){
    int**m=new int*[10];
    for(int i=0; i<10;i++){
        *(m+i)=new int[N];
    }
    return m;
}
void llenarVector(int* v,int N){
    for(int i=0; i<N;i++){
        *(v+i)=rand() % 999+1;
    }
}
void  reiniciarContadorColumna(int* v, int N){
    for(int i =0; i<N; i++){
        *(v+i)=0;
    }
}
void rescribirVector(int *v,int **m,int f,int N){
    int t=0;
    for(int i=0; i<f;i++){
        for(int j=0; j<N;j++){
            if(*(*(m+i)+j)>0 && *(*(m+i)+j)<1000){
                *(v+t)=*(*(m+i)+j);
                t++;
            }
            }
    }
}
void reiniciarMatriz(int **m,int f,int N){
    for(int k=0; k<10;k++){
            for (int q=0; q<N; q++){
                *(*(m+k)+q)=0;
            }
    }
}
void ordenar(int* v, int** m, int N){
    //crear vector contador columna e Inicializarlo a zero
    int* tam=new int[10];
    for(int i =0; i<10; i++){
        *(tam+i)=0;
    }
//ORDENAR POR UNIDADES
    for(int i=0; i<N;i++){
        int u=*(v+i)%10;
        *(*(m+u)+*(tam+u))=*(v+i);
        (*(tam+u))++;}
    //reiniciar tam
    reiniciarContadorColumna(tam,10);
    //reescribir el vector
    rescribirVector(v,m,10,N);
    //reescribir matriz en zeros
    reiniciarMatriz(m,10,N);
//ORDENAR POR DECENAS
    for(int i=0; i<N;i++){
        int d=(*(v+i)/10)%10;
        *(*(m+d)+*(tam+d))=*(v+i);
        (*(tam+d))++;}
    //reiniciar tam
     reiniciarContadorColumna(tam,10);
    //reescribir el vector
     rescribirVector(v,m,10,N);
    //reescribir matriz en zeros
    reiniciarMatriz(m,10,N);
//ORDENAR POR CENTENAS
    for(int i=0; i<N;i++){
        int c=*(v+i)/100;
        *(*(m+c)+*(tam+c))=*(v+i);
        (*(tam+c))++;}
    //reiniciar tam
     reiniciarContadorColumna(tam,10);
    //reescribir el vector
    rescribirVector(v,m,10,N);
// Liberar tam
    delete tam;
    tam=NULL;

}

void mostrar(int* v, int N){
    for(int i=0; i<N;i++){
    cout<<*(v+i)<<'\t';
}
cout<<endl;
}

int main()
{
int N;
cout<<"N(columnas): "<<endl;
cin>>N;

//(1)
    //Crear vector con memoria dinamica
int* vecto= crearVector(N);
    //Crear matriz con memoria dinamica
int** m= crearMatriz(N);
    //Llenar con numeros aleatorios
llenarVector(vecto,N);

//(2)
    //Crear una función que ordene el vector con le método descrito,  recibiendo los parámetros que considere
cout<<"El vector sin ordenar es: "<<endl;
mostrar(vecto,N);
ordenar(vecto,m,N);
cout<<"El vector ordenado es: "<<endl;
mostrar(vecto,N);

//(3)Liberar espacio
    // Liberar vecto
    delete vecto;
    vecto=NULL;
    //Liberar matriz
for(int i=0;i<10;i++)
    {
        delete[] *(m+i);
    }
    delete[]m;
    m=NULL;
cout<<'\n'<<"FIN"<<endl;

}
