#include "iostream"
using namespace std;
int main(){
	
//imprimir escalera

	
	int num=15;
	int num2=15;
	int numerales= 1;
	int contador=0;
	while(num!=7 ){
		for(int i=0; i<num; i++){
			cout<<'*';
			
			if((i+1) == num){
				
			for (int j=0; j<numerales; j++){
			cout << '#';
			}
			if(numerales==1){
			numerales++;}
			else{
				numerales+=2;}
			}	
		}
			
		if(contador==0 || contador==1){
			num2=num2;
		}
		else {
			num2--;
		}		
			
		for(int i=0; i<num2; i++){
			cout  << '*';
		}
		contador++;
			
			
		num--;
		cout <<endl;
	}
}

