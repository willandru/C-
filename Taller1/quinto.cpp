#include "iostream"
#include "vector"
#include "cstdlib"

using namespace std;
vector <int> frecu;

	
int playDice(){
	int random=1+rand()%6;
	return random;
}



int main(){
	
 cout << "VECTOR FRECUENCIA - METODO NORMAL"<<endl<<endl;
 frecu = { 0, 0, 0, 0, 0, 0 };
 
int tries[]={10, 100, 500, 1000 ,10000};
 int event, n;
 
 for (int j=0; j<5; j++){
	 n= tries[j];
	for(int i=0; i<n; i++){
	event=1+rand()%6; //Lanzamos el dado
		switch(event){ // Calculamos la frecuencia
			case(1):
			frecu[0]++;
			case(2):
			frecu[1]++;
			break;
			case(3):
			frecu[2]++;
			break;
			case(4):
			frecu[3]++;
			break;
			case(5):
			frecu[4]++;
			break;
			case(6):
			frecu[5]++;
			break;
		}
	}
 cout << "Vector Frecuencias para "<< n << " experimentos:"<<endl;
int suma=0;
for (int h=0; h<5; h++){
	cout << frecu[h] << " ";
	suma= suma+ frecu[h];
}	

// Calcular la probabilidad de cada cara

cout <<endl<< "Vector Probabilidad para "<< n << " experimentos:"<<endl;

for (int h=0; h<5; h++){
	cout << (double) frecu[h]/suma << " ";
}	

cout <<endl<<endl;

}
	
	
cout << "VECTOR FRECUENCIA - METODO RECURSIVO"<<endl<<endl;


 

}
