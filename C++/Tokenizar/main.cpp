#include <iostream>
#include <string.h>
using namespace std;

char** token(char* &f, char* t){
    int lf=strlen(f);
    cout<<"Tamaño f: "<<lf<<endl;
    int lt=strlen(t);
    cout<<"Tamaño t: "<<lt<<endl;
            bool* T=new bool[lf];


            for(int i=0; i<lf; i++){
                *(T+i)=0;
            }
            for(int i=0; i<lf;i++){
                for(int j=0; j<lt;j++){
                    if(*(f+i)== *(t+j)){
                        *(f+i)='/0';
                        *(T+i)=true;
                    }
                }
                cout<<*(T+i)<<" ";
            }
    int Q=1;
    int contador=0;
    char**m=new char*[Q];
    *m=NULL;

    for(int i=1;i<lf;i++){

        if(*(T+i)==0 && *(T+i-1)==1){
            char** aux= new char*[Q+1];
            for(int j=0; j<Q; j++){
                *(aux+j)=*(m+j);
            }
                *(aux+contador)= &(*(f+i));
                *(aux+Q)= *(m+Q-1);
                contador++;
                Q++;
                    delete[]m;
                    m=aux;
                    delete[]aux;

        }
        else if(*(T+i)==0 && *(T+i-1)==0 && contador==0){
                char** aux= new char*[Q+1];
            for(int j=0; j<Q; j++){
                *(aux+j)=*(m+j);
            }
                *(aux+contador)= &(*(f+i));
                *(aux+Q)= *(m+Q-1);
                contador++;
                Q++;
                    delete[]m;
                    m=aux;
                    delete[]aux;

        }

    }
return m;




}

int main()
{
    char* frase=new char[20];
    strcpy(frase," Pepe#Perez?14#M");
    cout<<frase<<endl;
    char* toks= new char[10];
    strcpy(toks," #?;");
    cout<<toks<<endl;
    char** m;
    m=token(frase,toks);


    return 0;
}
