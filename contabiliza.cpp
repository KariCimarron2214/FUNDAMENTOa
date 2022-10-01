//Creado por stalin franci
// modificado karina cimarron añapa
//Fecha:29 -09-2022
#include<iostream>
using namespace std;
int main()
{
	int kci=0,kcl;
	float kcx,kcs=0;
	cout<<"ingrese el limite l="; cin>>kcl;
	do{
		
	cout<<"ingrese el numero x="; cin>>kcx;
	kci=kci+1;
	kcs=kcs+kcx;



	}while(kci<kcl);
	cout<<"Se ingresaron "<<kcl<<" numeros "<< "que sumaron "<<kcs<<endl;
	return 0;



}
