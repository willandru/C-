#include "iostream"
using namespace std;
void printCharacter(char c, int n){
	for (int i=0; i<n;i++)
	cout << c;
	
	cout<<endl;
}

int main(){
	
	char caracter;
	int veces;
	
	cout <<"Ingrese un caracter"<<endl;
	cin >> caracter;
	cout <<"Ingrese el numero de veces a imprimir"<<endl;
	cin >> veces;
	printCharacter(caracter,veces);
	
	//imprimir escalera
	cout <<"Printing a 20-step ladder"<<endl;
	int num=1;
	while(num!=21){
	for(int i=0; i<num; i++){
		cout<<caracter;
	} cout<<endl;
	num++;
}
	
	
}
