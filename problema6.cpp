#include <iostream>

using namespace std;

int main (){
	int num, resto;
	int num1;
	int num2;
	cout << "Dame un numero, por favor: ";
	cin >> num1;
	cout << "Dame otro numero, por favor";
	cin >> num2;
	
	
	resto = num2%num1;
	if (resto==0){
		cout << "El numero " << num2 << " es multiplo de " << num1 ;
	} else {
		cout << "El numero " << num2 << " no es multiplo de " << num1;
	}
	return 0;
	}

