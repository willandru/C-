#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void concatenar(char*& c1, char* c2){
int sizec1 = strlen(c1);
int sizec2 = strlen(c2);
char* c3 = new char[sizec1 + sizec2];
int sizec3 = strlen(c3);
for(int i=0; i<sizec1; i++){
	*(c3+i)=*(c1+i);
}
int counter=0;
for(int i=sizec1; i<sizec3; i++)
{
	*(c3+i)=*(c2+counter);
	counter++;
}
c1 = c3;
}
int main()
{
    char* cadena1= "Hola ";
    char* cadena2= new char[7];
    strcpy(cadena2, "Mundo ");
  cout<<strlen(cadena1)<<endl;
    cout<<strlen(cadena2)<<endl;
    cout<<cadena1;

}
