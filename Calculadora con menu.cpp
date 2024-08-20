//Arizmendi Ponce Jhoana Michel
//2022350849
#include <iostream>
#include <stdlib.h>
#include <cmath>
//Implementar calculadora con las operaciones suma, resta, multiplicacion, division, potencia, sen(x), cos(x)
using namespace std;

class Suma{
	private:
		float a,b,suma;
	public:
		float suma_num();
};
class Resta{
	private:
		float c,d,resta;
	public:
		float resta_num();
};
class Multiplicacion{
	private:
		float e,f,mult;
	public:
		float mult_n();
};
class Division{
	private:
		float g,h,div;
	public:
		float div_n();
		
};
class Potencia{
	private:
		float p,el,pot;
	public:
		float pot_n();
		
};
class Seno{
	private:
		float s,sino;
	public:
		float sin_n();
};
class Cose{
	private:
		float k, cost;
	public:
		float cos_n();
};


float Suma::suma_num(){
	//a,b,suma;
	cout<<"Ingresa un numero a: ";
	cin>>a;
	cout <<"Ingresa un numero b: ";
	cin>>b;
	suma=a+b;
	cout<<"La suma es: "<<suma<<endl;
	cout<<"--------------------------"<<endl;
}

float Resta::resta_num(){
	//c,d,resta;
	cout<<"Ingresa un numero a: ";
	cin>>c;
	cout <<"Ingresa un numero b: ";
	cin>>d;
	resta=c-d;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"--------------------------"<<endl;
}
float Multiplicacion::mult_n(){
	//e,f,mult
	cout<<"Ingresa un numero a: ";
	cin>>e;
	cout <<"Ingresa un numero b: ";
	cin>>f;
	mult=e*f;
	cout<<"La multiplicacion es: "<<mult<<endl;	
	cout<<"--------------------------"<<endl;
}
float Division::div_n(){
	//g,h,div
	cout<<"Ingresa un numero a: ";
	cin>>g;
	cout <<"Ingresa un numero b: ";
	cin>>h;
	div=g/h;
	cout<<"La division es: "<<div<<endl;
	cout<<"--------------------------"<<endl;	
}
float Potencia::pot_n(){
	//p,el,pot
	cout<<"Ingrese un numero base: ";
	cin>>p;
	cout<<"Ingrese el exponente: ";
	cin>>el;
	pot=pow(p,el);
	cout<<"La potencia con base "<<p<<" y exponente "<<el<<" es: "<<pot<<endl;
	cout<<"--------------------------"<<endl;
}
float Seno::sin_n(){
	//s,sino
	cout<<"Ingrese un numero: ";
	cin>>s; //double sin(double x)
	sino=sin(s);
	cout<<"El seno del numero es: "<<sino<<endl;
	cout<<"--------------------------"<<endl;
}
float Cose::cos_n(){
	//k, cost
	cout<<"Ingrese un numero: ";
	cin>>k; 
	cost=cos(k);
	cout<<"El coseno del numero es: "<<cost<<endl;
	cout<<"--------------------------"<<endl;
}


int main(){
	int opcion;
	//creacion de objetos

	Suma s1;
	Resta r1;
	Multiplicacion m1;
	Division d1;
	Potencia p1;
	Seno se1;
	Cose co1;

	do {
	cout<< "\nCalculadora" << endl;
	cout<< "1. Suma" << endl;
	cout<< "2. Resta" << endl;
	cout<< "3. Multiplicacion" << endl;
	cout<< "4. Division"<<endl;
	cout<< "5. Potencia" << endl;
	cout<< "6. Seno(x)" << endl;
	cout<< "7. Coseno(x)" << endl;
	cout<< "8. Salir" << endl;
	cout<< "Selecciona una opcion: ";
	cin >> opcion;
	cout<<"--------------------------"<<endl;
	
	switch (opcion){
		case 1:
			s1.suma_num();
			break;
		case 2:
			r1.resta_num();
			break;
		case 3:
			m1.mult_n();
			break;
		case 4:
			d1.div_n();
			break;
		case 5:
			p1.pot_n();
			break;
		case 6:
   			se1.sin_n();
			break;
		case 7:
			co1.cos_n();
			break;
		case 8:
			cout<<"Saliendo de la calculadora"<<endl;
			break;
		default:
			cout<<"Opcion no valida, selecciona otra opcion";
	} 	
} while (opcion !=8);
	
	
	system("pause");
	return 0;
}
