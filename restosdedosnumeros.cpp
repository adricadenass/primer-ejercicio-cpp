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
	
	
	resto = num1%num2;
	if (resto==0){
		cout << "El numero" << num1 << "es multiplo de " << num2 ;
	} else {
		cout << "El numero " << num1 << "no es multiplo de , sorry" << num2;
	}
	return 0;
	}
	
