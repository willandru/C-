#include <iostream>

using namespace std;

int main()
{
    short int x=10;
    short int y=10;
    short int* p=&x;
    short int* pp=&y;
    int w=50;
    int*pw=&w;
    cout <<x << '\t'<< p<<endl;
    cout <<"El tamano del apuntador es: "<< sizeof(p)<<endl;
    cout <<y << '\t'<< pp<<endl;
    cout <<"El tamano del apuntador es: "<< sizeof(pp)<<endl;
    cout <<w << '\t'<< pw<<endl;
    cout <<"El tamano del apuntador es: "<< sizeof(pw)<<endl;
    return 0;
}
