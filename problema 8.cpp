#include <iostream>

using namespace std;

int main (){
	int resultado;
	int num1;
	int num2;
	cout << "Dame un numero, por favor: ";
	cin >> num1;
	cout << "Dame otro numero, por favor ";
	cin >> num2;
	
	
	if (num2 != 0) {
	resultado = num1/num2;
	cout << "El resultado de esto es " << resultado;
	} else {
		cout << "ERROR";
	}
	return 0;
}
