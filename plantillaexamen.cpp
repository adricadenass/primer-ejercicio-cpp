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
	int variableUsario;
	
	
	cout << "Adivina un numero del 1 al 10, con los intentos que quieras. Se formatean cada vez que aciertas, y se almacenan tus aciertos.";
	cin >> variableUsuario;
	
	if(variableIntentos < 1){
		cout << "Intentalo, la primera es dificil"
   } else {
		"Sigue"
	}

    while (variableUsuario> -1){
    	int pegasus = aleatorio ();
	}
    
    cout << "Dame un numero, si es negativo se cierra esto."
    cin >> variableUsuario
    
    if(variable == pegasus){
    	cout << "Has acertado crack"
	} else {
		cout << "Sigue"
	}
    switch (varSw){
    	case 0:
    	case 1:
    		//Esto se hace si varsw e igual a 1 o 0
    		break;
    	case 2: //Esto se hace si varsaw es igual a 2
    	    break;
    	default;
    	    break;
    	    
	}
	
	
	while (varSw>-1){
		//Esto se hará en bucle hasta que no sea cierta la condicion
		cout << "Dame un numero"
		cin >> varSw;
	}


	return 0;
}

