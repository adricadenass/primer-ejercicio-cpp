#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float grados, gradoRadianes;
    float PI = 3.14159265;
    grados = 30;
    gradoRadianes = grados*(PI/180);
    cout << "El coseno de " << grados << "es " << gradoRadianes;
    
    grados = 45;
    gradoRadianes = grados*(PI/180);
    cout << "El coseno de " << grados << "es " << gradoRadianes;
    
    grados = 360;
    gradoRadianes = grados*(PI/180);
    cout << "El coseno de " << grados << "es " << gradoRadianes;
    

    grados = 90;
    gradoRadianes = grados*(PI/180);
    cout << "El coseno de " << grados << "es " << gradoRadianes;
    

	return 0;
}
