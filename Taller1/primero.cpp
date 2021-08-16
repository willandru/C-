#include "iostream"
#include "cmath"
using namespace std;

double Hipotenusa(double c1, double c2){
	double h;
	
	h= sqrt(pow(c1,2)+ pow(c2,2));
	return h;
}

int Menor(int a, int b, int c){
	
	int menor=100000;
	if(a< menor){
		menor =a;
	}
	if (b <menor){
		menor=b;
	}
	if(c<menor){
		menor=c;
	}
	return menor;
}

void digitos(int n){
	cout << n%10<<" unidades"<<endl;
	cout << (n/10)%10<<" decenas"<<endl;
	cout << (n/100)%10<<" centenas"<<endl;
	cout << (n/1000)%10<<" millares"<<endl;
}

int main(){
	
	// Cálculo de la hipotenusa
	double hipotenusa, cateto1, cateto2;
	
	cateto1=10;
	cateto2=18.5;
	cout <<"El cateto 1 es " << cateto1 <<"cm, "<<"El cateto 2 es " << cateto2 <<"cm, "<<endl;
	
	
	hipotenusa= Hipotenusa(cateto1, cateto2);
	cout <<"La hipotenusa es: " << hipotenusa <<endl;
	
	// número menor
	cout <<"Ingrese 3 números enteros : " <<endl;
	int a,b,c, menor;
	cin >> a;
	cin >> b;
	cin >> c;
	
	menor= Menor(a,b,c);
	cout <<"El número menor es: " <<menor<<endl;
	
	//Imprimir millares de un número de 4 digitos
	
	cout <<"Ingrese 1 número entero de 4 digitos: " <<endl;
	int numero; 	
	cin >> numero;
	digitos(numero);
	cout <<numero;
	
}
