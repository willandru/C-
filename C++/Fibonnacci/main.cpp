#include <iostream>

using namespace std;
int fibonacci(int n){
    int fibo=1;
    if (n<=1){
        return fibo;
    }
    else
       fibo= fibonacci(n-1)+fibonacci(n-2);
    return fibo;
}

int main()
{
    int n;
    cout << "Ingrese n" << endl;
    cin >> n;
    int numero;
    numero=fibonacci(int n);
    return 0;
}
