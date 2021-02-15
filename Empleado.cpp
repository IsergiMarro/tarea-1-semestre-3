//main
#include "persona.cpp"
#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion;
	int telefono;
	cout<<"Ingrese Nit del empleado: ";
	cin>>nit;
	cout<<"Ingrese Nombres del empleado: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos del empleado: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion del empleado: ";
	cin>>direccion;
	cout<<"Ingrese Telefono del empleado: ";
	cin>>telefono;
	// instanciar
	Cliente obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
	empleado obj = Cliente(nombres,apellidos,direccion,telefono,nit);
	obj.mostrar();
