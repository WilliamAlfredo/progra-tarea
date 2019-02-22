//codigo hecho por william alfredo vasquez
//carnet:VF18003
//codigo para saber cual es el mayor de dos numeros
#include <iostream>//libreria obligatoria
#include <conio.h>//consolola de entrdas y salidas

using namespace std;//palabras reservdas del programa

int mayor();//declramos una funcion

int main(){//cuerpo del programa para declarar funciones
	mayor();
	getch();

}

int mayor(){//utilizamos la funcion
	 int a;
	 int b;
	 
	 cout<<"ingrese un numero:"<<endl;//le pedimos al usuario que dijite un numero
	 cin>>a;
	 cout<<"ingrese otro numero:"<<endl;//le pedimos que dijite otro numero
	 cin>>b;
	 
	 int *punteroX=&a;
	 int *punteroY=&b;
	 
	 if(*punteroX > *punteroY){
	 	cout<<"el primer numero es:"<<endl;
	 	cout<<*punteroX<<endl;
	 	cout<<"el segundo numero es:"<<endl;
	 	cout<<*punteroY<<endl;
	 }
	 else {
	 cout<<"el primer numero es:"<<endl;
	 cout<<*punteroY<<endl;
	 cout<<"el segundo numero es:"<<endl;
	 cout<<*punteroX<<endl;
	 
     }
}
