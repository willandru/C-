#include <iostream>
#include <string.h>
using namespace std;

int atoI(char* c){
int N= strlen(c);
char cero= '0';
int numero=0;
int posicion=1;
for(int i=N-1; i<=0; i--){
    numero+= (*(c+i)-cero)*posicion;
    posicion*=10;
}
return numero;
}

int main()
{
    char* cadena= new char[30];
    cin.getline(cadena,30,'\n');
    cout << strlen(cadena) << endl;
    int n;
    n= atoI(cadena);
    cout<<n<<endl;
    return 0;
}
