#include <iostream>
using namespace std;
int suma(int num1,int num2,int num3);
void suma(int &num1,int &num2);
//metodos y funciones = ejecutan una porcion de codigo N cantidades de veces segun se maneja
//metodo no retorna un tipo de dato
//fucniíon retorna un tipo de dato determinado 
/*80 lineas en 10 lugares distintos = 800 lineas de codigo de las cuales 80 son iguales,
crean una funcion o un metodo = y lo mandan a llamar 10 veces = 80 lineas de cogio y 10 llamados a funciones.
   */
     

//Funcion que sume dos valores  
/*int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
}  

int suma(int num1,int num2,int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return resultado;
} 

main (){
    cout<<suma(10,20)<<endl;
    cout<<suma(10,20,40)<<endl;
    system("pause");
}*/
    


//Metodo y envio de parametros por referencia.
void suma(int &num1,int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}
 
main (){
	int a=10,b=20;
    
	suma(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
	system("pause");
}
