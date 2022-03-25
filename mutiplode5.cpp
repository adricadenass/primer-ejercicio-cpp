#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int num, resto;
	cout << "Dame un numero enter, por favor: ";
	cin >> num;
	
	resto = num%5;
	if (resto==0){
		cout << "El numero " << num << "es multiplo de 5.";
	} else
	    cout << "El numero" << num << "NO es multiplo de 5, una pena";

return 0;
}

