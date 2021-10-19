#include <iostream>
#include <fstream>

using namespace std;

int main()
{
     ifstream flujo;
     flujo.open("cb.bmp",ios::in|ios::binary);
     if(flujo.fail()){
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }
    char letra[2];
    flujo.read((char*)letra,2);
    cout << letra[0] << letra [1] << endl;
    int tam;
    flujo.read((char*)&tam,4);
    cout << tam << endl;
    cout <<"Dimension de la imagen" << endl;
    int dim[2];
    flujo.seekg(18,ios::beg);
    flujo.read((char*)dim,8);
    cout << "Ancho : " << dim[0]<<endl;
    cout << "Alto : " << dim[1]<< endl;

    int size=3*dim[0]*dim[1];
    unsigned char* data = new unsigned char[size]; // allocate 3 bytes per pixel
        fread(data, sizeof(unsigned char), size, flujo); // read the rest of the data at once
        fclose(f);

        for(int qq=0;qq<SCREEN_WIDTH;++qq)
            for (int kk=0;kk<SCREEN_HEIGHT;++kk)
            {
                PI[qq][kk][0] = data[kk * width + qq];
                PI[qq][kk][1] = data[kk * width + qq + 1];
                PI[qq][kk][2] = data[kk * width + qq + 2];
            }
