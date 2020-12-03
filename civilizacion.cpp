#include "civilizacion.h"

using namespace std;

Civilizacion::Civilizacion(){}

Civilizacion::Civilizacion(string nombre, int ubicacion_x, int ubicacion_y, float puntuacion){
    this->nombre = nombre;
    this->ubicacion_x = ubicacion_x;
    this->ubicacion_y = ubicacion_y;
    this->puntuacion = puntuacion;
}

void Civilizacion::setNombre(const string& v){
    this->nombre = v;
}
void Civilizacion::setUbicacionX(int v){
    this->ubicacion_x = v;
}
void Civilizacion::setUbicacionY(int v){
    this->ubicacion_y = v;
}
void Civilizacion::setPuntuacion(float v){
    this->puntuacion = v;
}

string Civilizacion::getNombre(){
    return this->nombre;
}
int Civilizacion::getUbicacionX(){
    return this->ubicacion_x;
}
int Civilizacion::getUbicacionY(){
    return this->ubicacion_y;
}
float Civilizacion::getPuntuacion(){
    return this->puntuacion;
}

Civilizacion::~Civilizacion(){}