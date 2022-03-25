#include <iostream>

using namespace std;

int main(){
int n1, n2,n3,n4, suma;
    cout << "Dame tu primera nota ";
	cin >> n1;
	cout << "Dame tu segunda nota ";
	cin >> n2;
	cout << "Dame tu tercera nota ";
	cin >> n3;
	cout << "Dame tu cuarta nota ";
	cin >> n4;
	
	suma = n1+n2+n3+n4;
	int media = suma/4;
	
	cout << "La media de tus notas es " << media << endl;
	return 0;
	
}
