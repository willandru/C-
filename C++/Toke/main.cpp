#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
char** token(char* fra, char* tok){
    cout<<fra<<endl;
   char** m=new char*[1];
    *m=NULL;
    int ltok= strlen(tok);
    int lfra= strlen(fra);


    return m;
}

int main()
{
    char* frase="pepe#perez 8#M";
    char* tokns=" #;?";
    cout << frase<< endl;
    cout << tokns<< endl;

    char** token(char* frase, char* tokns);
    return 0;

}
