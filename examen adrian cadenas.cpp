#include <iostream> 
#include <math.h>

using namespace std;

int main (){

float X;
float ALFA;
float H;
float RADIANES; 

cout << "Vamos a ver si existen limitaciones a la circulaci�n de su veh�culo." << endl;
cout << "Situese a una distancia X del veh�culo y mida el �ngulo ALFA, en grados, que forma la linea visual entre usted y el techo del veh�culo" << endl;
cout << "Introduce X";
cin >> X;
cout << "Introduce Alfa";
cin >> ALFA;

cout << (RADIANES=(3.14*ALFA)/180) << endl;
cout << (H=X*tan(RADIANES));

cout << "Comprobaci�n de g�libo (altura m�xima permitida)";

if (H<2.2){
	cout << "Su veh�culo no tiene limitacion alguna de circulacion";
} if ( H> 2.2 && H<4){
	cout << "No puede circular por la ciudad, salvo en horario de carga y descarga";
} if ( H>4){
	"S�lo puede circular a trav�s de las v�as principales y queda prohibido utilizar los tuneles";
}
 float ALTURA;


return 0;
}

