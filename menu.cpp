#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"Ingrese su Nit: ";
	cin>>nit;
	cout<<"Ingrese su nombre: ";
	cin>>nombres;
	cout<<"Ingrese su apellido: ";
	cin>>apellidos;
	cout<<"Ingrese su dirreccion: ";
	cin>>direccion;
	cout<<"Ingrese el telefono: ";
	cin>>telefono;
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	cout<<"ingrese el Nit: ";
	cin>>nit;
	obj.setNit(nit);
	obj.mostrar();