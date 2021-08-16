#include "iostream"
using namespace std;

int main(int argc, char **argv){
 int edades[]={4,7,8,13,5,6,23,4,5,67,3,25,67,43,54,65};
 int limit = (sizeof(edades)/sizeof(edades[0]));


 cout << sizeof(edades)<<endl;
 // No funciona:    cout << sizeof(edades[])<<endl;
 cout << sizeof (edades[0])<<endl;
 // No funciona:    cout << sizeof (edades [0:2])<<endl;
 cout << limit<<endl<<endl;
 
 //Mirando sizeof
 cout << "************************************************"<<endl;
 cout << "sizeof para diferentes tipos de datos" <<endl<<endl;
 
 cout<< "sizeof: short"<<endl;
 cout << sizeof(short)<<endl;
 cout<< "sizeof: long"<<endl;
 cout << sizeof(long)<<endl;
 cout<< "sizeof: signed"<<endl;
 cout << sizeof(signed)<<endl;
 cout<< "sizeof: unsigned"<<endl;
 cout << sizeof(unsigned)<<endl;
 cout<< "sizeof: unsigned long"<<endl;
 cout << sizeof(unsigned long)<<endl;
 cout<< "sizeof: signed long"<<endl;
 cout << sizeof(signed long)<<endl;
 cout<< "sizeof: unsigned short"<<endl;
 cout << sizeof(unsigned short)<<endl;
 cout<< "sizeof: signed short"<<endl;
 cout << sizeof(signed short)<<endl<<endl;
 
 int a =9;
 unsigned int b=2;
 signed int c=3;
 short int d=4;
 signed short int e=3;
 unsigned short int f=4;
 long int g=5;
 signed long int h=9;
 unsigned long int i=9;
 
 
 cout << "sizeof:--int--" <<endl;
 cout << "int" <<endl;
 cout << sizeof(a)<< endl;
 cout << "unsigned int" <<endl;
 cout << sizeof(b)<< endl;
  cout << "signed int" <<endl;
 cout << sizeof(c)<< endl;
 cout << "short int" <<endl;
 cout << sizeof(d)<< endl;
 cout << "signed short int" <<endl;
 cout << sizeof(e)<< endl;
  cout << "unsigned short int" <<endl;
 cout << sizeof(f)<< endl;
 cout << "long int" <<endl;
 cout << sizeof(g)<< endl;
  cout << "signed long int" <<endl;
 cout << sizeof(h)<< endl;
  cout << "unsigned long int" <<endl;
 cout << sizeof(i)<< endl<<endl;


 double aa =9;
 //short double cc=4;
 long double bb=5;
 cout << "sizeof:--double--" <<endl;
 cout << "double" <<endl;
 cout << sizeof(aa)<< endl;
 cout << "long double" <<endl;
 cout << sizeof(bb)<< endl<<endl;
 
 float aaa =9;
 //short float bbb=4;
 //long float ccc=5;
 //unsigned float ddd=9;
 cout << "sizeof:--float--" <<endl;
 cout << "float" <<endl;
 cout << sizeof(aaa)<< endl<<endl;
 
 char aaaa ='l';
 unsigned char bbbb='4';
 signed char cccc='l'; 
 cout << "sizeof:--char--" <<endl;
 cout << "char" <<endl;
 cout << sizeof(aaaa)<< endl;
 cout << "unsigned char" <<endl;
 cout << sizeof(bbbb)<< endl;
 cout << "signed char" <<endl;
 cout << sizeof(cccc)<< endl<<endl;
 
 bool bo=true; 
 cout << "sizeof:--bool--" <<endl;
 cout << "bool" <<endl;
 cout << sizeof(bo)<<endl<<endl;




}
