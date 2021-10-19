#include <iostream>
using namespace std;

int main()
{
    // vec
    int* v=new int[3];
        for(int i=0; i<3;i++){
            *(v+i)=i+1;
        }
        for(int i=0; i<3;i++){
            cout<<*(v+i);
        }
    delete v;
    for(int i=0; i<3;i++){
       *(v+i)=NULL;
    }
    cout<<endl;
    //mat
    int f=3; int c=4;
    int** m=new int*[f];
        for(int i =0; i<f;i++){
            *(m+i)=new int[c];
            }
        int cont=0;
        for(int i=0; i<f;i++){
        for(int j=0; j<c;j++){
            *(*(m+i)+j)=cont;
            cont++;
            }
          }
        for(int i=0; i<f;i++){
        for(int j=0; j<c;j++){
            cout <<*(*(m+i)+j)<<'\t';
            }
            cout<<endl;
          }
    for(int i=0;i<f;i++)
    {
        delete[] *(m+i);
        *(m+i)=NULL;
    }
    delete[]m;
    m=NULL;
}
