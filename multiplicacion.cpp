//codigo hecho por william alfredo vasquez
//carnet:VF18003
//codigo de multiplicar un numero por 10
#include <iostream>//libreria obligatoria
#include <conio.h>//consola de entrdas y salidas

using namespace std;//palabras reservadas del programa

double numero();//declaramos la funcion

int main(){//cuerpo del programa donde se declaran funciones
	
	numero ();
	getch();
	return 0;
}

double numero(){//utilizamos la funcion
	
	int num;
	int result;
	
	cout << "ingrese un numero:"<<endl;//le pedimos al usuario dijitar un numero
	cin>>num;
	
	int *puntero=&num;
	
	result = *puntero *10;
	
	cout<< "el numero es"<< num <<"multiplicado por 10 su resultado es:"<<endl;
	cout<<result<<endl;
}
