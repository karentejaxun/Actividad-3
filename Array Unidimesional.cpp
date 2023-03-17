#include <iostream>
using namespace std;
 
main(){
	//array = arreglo o coleccion o matriz
	//se utilizan para almacenar varios valores en una sola variable 
	//int tamanio=0,suma=0,promedio=0;
	//ARREGLO DE CHAR
	
	string semana[7]={"lunes","Martes","Miercoles","Jueves","Viernes"};
	
	for (int i=0;i<7;i++){
		cout<<semana[i]<<endl;
	}
	
	/*string nombre;
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese Nombre Completo: ";
	getline(cin,nombre);
	
	cout<<nombre<<endl;*/
	
	
	/*char nombre[30];
	cout<<"Ingrese Nombre Completo: ";
	//cin>>nombre;
	cin.get(nombre,30);
	cout<<nombre<<endl;*/
   
    /*//ARREGLOS DE ENTEROS
	int tam=0,suma=0,promedio=0;
	int notas[tam];
	char res;
	do{
	    tam++; 
	    cout<<"Ingrese nota "<<tam<<":";
	    cin>>notas[tam-1];
		cout<<"Desea ingresar otra nota(s/n): ";
		cin>>res;
	}while(res=='s'||res=='S');
	
	for(int i=0;i<tam;i++){
		cout<<notas[i]<<endl;
		suma+=notas[i];
	}
	promedio = suma/tam;
	cout<<"El promedio es: "<<promedio<<endl;*/
	
	
	//ejemplo 3
	/*
	int tam=0,suma=0,promedio=0;
	cout<<"cuantas notas desea ingresar: "<<endl;
	cin>>tamanio; //5
	int notas[tamanio];
	
	 for (int i=0;i<tamanio;i++){
	 	cout<<"Ingrese Nota "<<i+1<<":";
	 	cin>>notas[i];
	 }
	 
     for (int i=0;i<tamanio;i++){
	 	suma +=notas[i]; //suma = suma + notas[i]
	  }
	  promedio = suma / tamanio;
	  cout<<"El promedio es: "<<promedio<<endl;*/
	
	/*int notas[4];
	notas[0] = 80;
	notas[1] = 65;
	notas[2] = 60;
	notas[3] = 75;
	
	for(int i=0; i<4;i++){
	   cout<<i<<":"<<notas[i]<<endl;
    }*/
    
	/*cout<<notas[0]<<endl;	
	cout<<notas[1]<<endl;
	cout<<notas[2]<<endl;
	cout<<notas[3]<<endl;
	notas[2] = 70;
	cout<<"valor modificado (2)"<<notas[2]<<endl;*/
	system("pause");
}
