#include <iostream>

using namespace std;
/*
int** crearMatriz(int N){
    int**m=new int*[10];
    for(int i=0; i<10;i++){
        *(m+i)=new int[N];
    }
    return m;
}*/
int main()
{/*
    int N;
    cin>>N;
  int** m= crearMatriz(N);


const int f=10;
for(int i=0;i<f;i++){
        for(int j=0;j<N;j++){
            cout <<*(*(m+i)+j)<<'\t';
        }
        cout<<endl;
    }


int cont=1;
    for(int i=0;i<f;i++){
        for(int j=0;j<N;j++){
            *(*(m+i)+j)=cont;
            cont++;
        }
    }
    for(int i=0;i<f;i++){
        for(int j=0;j<N;j++){
            cout <<*(*(m+i)+j)<<'\t';
        }
        cout<<endl;
    }
*/
cout<<125%10<<'\t'<<(125/10)%10<<'\t'<<(125/100)<<endl;
    return 0;
}
