#include <iostream> 
#include <stdlib.h>
#include <time.h>

using namespace std;

int aleatorio(){
	int num;
	srand(time(NULL));
	num=rand()%11;
	return num;
}
 
int main (){
	
	int variableIntentos;
	int variableAciertos;
	int variableUsuario;
	
	
	cout << "Adivina un numero del 1 al 10, con los intentos que quieras." << endl;
	cout << "Se formatean cada vez que aciertas, y se almacenan tus aciertos. " << endl;
	cin >> variableUsuario ;
	
	if(variableIntentos < 1){
		cout << "Intentalo, la primera es dificil " << endl;
    } 

    while (variableUsuario> -1){
    	int pegasus = aleatorio();
	
    
    cout << "Dame un numero, si es negativo se cierra esto." << endl;
    cin >> variableUsuario;
    
    if( variableUsuario == pegasus ){
    	cout << "Has acertado crack " << endl ;
	} else {
		cout << "Sigue " << endl;
	}
	
	
	if ( variableUsuario == pegasus ){
		variableAciertos ++;
		cout << "Llevas esta cantidad de aciertos (pau ponme un 10): " << variableAciertos;
	}
	
	
	
}return 0;
}

