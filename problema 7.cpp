#include <iostream>

using namespace std;

int main (){
	int num, resto;
	int num1;
	int num2;
	cout << "Dame un numero, por favor: ";
	cin >> num1;
	cout << "Dame otro numero, por favor ";
	cin >> num2;
	
	
	
	if (num1-num2 <0){
		cout << "El numero " << num1 << " es menor que " << num2;
	if (num1-num2 >0)
		cout << "El numero " << num1 << " es mayor que " << num2;
	}
	return 0;
	}
	
