#include <iostream>
using namespace std;
int main(){
	
	//int contar;
	
 	/*//1 
	    for(int i=0; i<=10; i++){ // variable, inicio, final, incremento o decremento;
		cout<<i<<endl;
	}*/
	
	/*//2
	for(int i=1; i<=10; i+=1){ 
		cout<<i<<endl;
	}*/
	
	/*
	//3
	for(int i=0; i<=10; i+=2){ //inmcrementando de 2 en 2 
		cout<<i<<endl;	
	}*/
    
	//hace 11 ciclos poque empieza de 0 
    	/*
		//4
		for(int i=0; i<=10; i+=1){ 
		cout<<i<<endl;
    	contar++;
    }
    cout<<"ciclos: "<<contar<<endl;*/
    
    	//hace 9 ciclos porque empieza de 1 e i es menor a 10
    /*//5
	for(int i=1; i<10; i++){ 
		cout<<i<<endl;
    	contar++;
    }
    cout<<"ciclos: "<<contar<<endl;*/
    
    /*//6
	for(i=0; i<10; i++){ 
		cout<<i<<endl;
    }
    cout<<"i afuera: "<<i<<endl;*/
    
    /*//7
	int i=0;
	int contar =0;  
    for(i=4; i<=8; i+=2){ // 4 hasta 7; 4 hasta 8 
		cout<<i<<endl;
		contar++;
		
    }
    cout<<"i afuera: "<<i<<endl;
	cout<<"ciclos: "<<contar<<endl;	*/
	
	//CASOS DE DECREMENTO
	/*
	//8
	for(int i=10; i>=0; i--){ // variable, inicio, final, incremento o decremento;
	cout<<i<<endl;
	}*/
	
	/*//9
	    for (int i=0; i<10;i++){
		if(i==5){
		cout<<"if"<<endl;
		continue;
	    }
	cout<<i<<endl; 
    }
      
    cout<<"fuera del for"<<endl;*/
    
    //ARREGLOS
    /*for (float i=0;i<10;i+=0.1){
    	
    	cout<<i<<endl;
	}*/
	
	/*
	int tam = 0;
	int datos[] = {10,40,100,250,5000};
	tam = sizeof(datos) / sizeof(datos[0]);
 
	
	for(int i=0;i<tam;i++){
		cout<<datos[i]<<endl;
	}
	*/
    
	
	/*int datos[] = {10,40,100,250};

	for(int i : datos){
	cout<<i<<endl;
    }
	*/
	
	//TABLA DE MULTIPLICAR
	/*int tabla = 0,res = 0;
	
	cout<<"Ingrese tabla: "<<endl;
	cin>>tabla;
	
	for(int i=1;i<=10;i++){
		res = tabla * i;
		cout<<tabla<<" X "<<i<<" = "<<res<<endl;
	}*/
	
	int inicio = 0,fin = 0,res = 0;
	
	cout<<"Ingrese tabla inicial: "<<endl;
	cin>>inicio;
	cout<<"Ingrese tabla final: "<<endl;
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
		for(int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<" X "<<i<<" = "<<res<<endl;
	    }
	  cout<<"Tabla del: "<<rango<<endl;
	
    }
	  
	system("pause");
}
