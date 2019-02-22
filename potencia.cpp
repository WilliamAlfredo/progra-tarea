//codigo hecho por william alfredo vasquez
//carnet:VF18003
//codigo de elevar un numero a una potencia entera
#include <iostream>//libreria obligatoria
#include <conio.h>//consola de entrdas y salidas
#include <math.h>//para realizar operaciones matematicas

using namespace std;//palabras reservdas del programa

void potencia();//declaramos funcion void potencia

int main (){//cuerpo del programa donde se declaran funciones
	
	potencia ();
	getch();
	return 0;
	
}

void potencia (){//utilizamos la funcion potencia
	 double a;
	 int b;
	 float result;
	 
	 cout << "Ingrese un numero para la base: ";//le pedimos al usuario que ingrese un numero para la base
	 cin >> a;
	 cout << endl;
	 cout << "Ingrese un numero para el exponente: ";//le pedimos que ingrese a que potencia desea ingresarlo
	 cin >> b;
	 cout << endl;
	 
	 double *puntero = &a;
	 int *puntero_2 = &b;
	 
	 result = pow(*puntero, *puntero_2);
	 
	 cout << "El numero "<< a << " elevado a " << b << " es igual a: "<< result <<endl;//inprimimos el resultado
}
