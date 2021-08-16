#include "iostream"
#include "cstdlib"
#include "vector"
using namespace std;

vector <int> randomNumbers;

void overallSum(vector <int> &p){
	int suma=0;
	for( auto a= p.begin(); a!= p.end(); a++){
		suma =suma + *a;
	}
	cout << "La suma del arreglo es: " << suma <<endl;
}

int main(){
	
	// Crear un vector aleatorio de 10 numeros
	for (int i=0; i<10;i++){
		randomNumbers.push_back(rand()%10);
	}
	cout << "EL vector aleatorio es: "<<endl;
	for( auto a= randomNumbers.begin(); a!= randomNumbers.end(); a++){
		cout<< *a<<' ';
	} cout <<endl<<endl;
	
	//Funcion :suma del vector
	overallSum(randomNumbers);
	cout <<endl<<endl;
	//Replace one lement whit another one
	
	int posicion, newNumber;
	
	cout << "INgrese la psicion que desea remplazar"<<endl;
	cin >> posicion;
	cout << "Ingrese el nuevo numero "<<endl;
	cin >> newNumber;
	randomNumbers[posicion]=newNumber;
	
	for( auto a= randomNumbers.begin(); a!= randomNumbers.end(); a++){
		cout<< *a<<' ';
	} cout <<endl<<endl;
	
	// Imprimir los valores pares del arreglo:
	cout << "Los valores pares del arreglo son: "<<endl;
	for( auto a= randomNumbers.begin(); a!= randomNumbers.end(); a++){
		if((*a)%2==0){
		cout<< *a<<' ';
	}
	} cout <<endl;
}
