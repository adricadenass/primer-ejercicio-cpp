#include <iostream> 
#include <math.h>

using namespace std;

int main (){

float X;
float ALFA;
float H;
float RADIANES; 

cout << "Vamos a ver si existen limitaciones a la circulación de su vehículo." << endl;
cout << "Situese a una distancia X del vehículo y mida el ángulo ALFA, en grados, que forma la linea visual entre usted y el techo del vehículo" << endl;
cout << "Introduce X";
cin >> X;
cout << "Introduce Alfa";
cin >> ALFA;

cout << (RADIANES=(3.14*ALFA)/180) << endl;
cout << (H=X*tan(RADIANES));

cout << "Comprobación de gálibo (altura máxima permitida)";

if (H<2.2){
	cout << "Su vehículo no tiene limitacion alguna de circulacion";
} if ( H> 2.2 && H<4){
	cout << "No puede circular por la ciudad, salvo en horario de carga y descarga";
} if ( H>4){
	"Sólo puede circular a través de las vías principales y queda prohibido utilizar los tuneles";
}
 float ALTURA;


return 0;
}

