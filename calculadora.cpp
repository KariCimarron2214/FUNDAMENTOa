//Programa que presenta las operaciones básicas
//Creado por stalin franci
// modificado karina cimarron añapa
//Fecha:29 -09-2022

#include<iostream>
using namespace std;

int main()
{
	float kcx,kcy,kcs,kcm,kcd,kcr;
	//Ingreso de datos
	cout<<"Ingrese en valor de kcx=:";
	cin>>kcx;
	cout<<"Ingrese en valor de kcy=:";
	//Operaciones 
	cin>>kcy;
	kcs=kcx+kcy;
	kcm=kcx*kcy;
	kcd=kcx/kcy;
	kcr=kcx-kcy;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<kcx<<" + "<<kcy<<" = "<<kcs<<endl;
	cout<<"Las multiplicacion de "<<kcx<<" * "<<kcy<<" = "<<kcm<<endl;
	cout<<"Las division de "<<kcx<<" / "<<kcy<<" = "<<kcd<<endl;
	cout<<"Las resta de "<<kcx<<" - "<<kcy<<" = "<<kcr<<endl;
	return 0 ;

}
