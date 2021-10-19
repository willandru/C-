#include <iostream>
#include <string.h>
using namespace std;
char** token(char* cd, char* dlm){
    char** m= new char*[1];

    for(int i)



    return m;
}


int main()
{
    cout << "Ingrese la cadena de texto: "<< endl;
    char* c1= " Pepe#Dias;23 ?M;
    char* c2= " ,#?-;.";
    int N1= strlen(c1);
    int N2= strlen(c2);
    char** m= new char*[1];
    int tam=0;
    for(int i=0; i<N1;i++){
            for(int j=0; j<N2;j++){
                 if(*(c1+i)¡=*(c2+i){

                    *(m+tam)=new char[1];
                    char temp= strcpy(temp,*(c1+i));

                    }
            }

    }


    cout<<strlen(c1)<<endl;
    cin>> c1;
    cout<<strlen(c1)<<endl;
    //cin >>texto;

    char delimitador= " ,#?-;.";
    // cout<<sizeof(delimitador)<<endl;
//    cout<<strlen(delimitador)<<endl;
    //cout<<sizeof(texto)<<endl;


    //cout<<strlen(cadena)<<endl;
    //char* cadena= new char[N];
    //strcpy(cadena,texto);

   // cout<<strlen(cadena)<<endl;
    //cin>>cadena1;
    //cout<<strlen(cadena1);

    //for(int i=0; i<)


    //char** m= token(char* cadena, char* delimitador);





    return 0;
}
