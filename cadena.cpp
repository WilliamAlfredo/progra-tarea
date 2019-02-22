//codigo hecho por william alfredo vasquez
//carnet:VF18003
//codigo para que devuelva los caracteres al reves
#include <iostream>//libreria obligatoria 
#include <stdlib.h>//libreria estandar
#include <conio.h>//consola de entradas y salidas
#include <stdio.h>//contiene las declaraciones de funciones 
char cad[16];
char *ptrcad;

using namespace std;//palabras reservadas del lenguaje

int main(){//cuerpo del progrma donde se declaran funciones 
	cout << "ingrese su cad:";//imprimiendo 
	gets(cad);
	cout << "\n" << cad;
	cout << endl;
	for(int i=15; i>=0; i--){//estructura para repetir un bloque de instrucciones
		ptrcad=&cad[i];
		cout << *ptrcad;
	}
	
	
	getch();
	return 0;//retorna la variable 
}
