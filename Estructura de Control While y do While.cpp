#include <iostream>
using namespace std;
main(){
    //si la condicion es verdadera se cumple la función del programa
	/*int i = 5;
	while(i<5){
		cout<<"while: "<<i<<endl;
		i+=1;
	
	}*/
	
	/*int i = 5;
	while(i>0){
		cout<<"while: "<<i<<endl;
		i-=1;
		cout<<i<<endl;
    }*/
    
    //DO WHILE
    //ejecuta y después valida si la condición se cumple.
    /*int x = 5;
    do{
		
		cout<<"do while : "<<x<<endl;
		x+=1;
    
     
      }while(x<5);*/
      
    /*char respuesta;
	
	do{
		cout<<"Deseaa ingresar otro valor (s/n) ";
		cin>>respuesta;
			
	}while(respuesta=='s'|| respuesta=='S');
    */
    
    char respuesta ='s';

	while(respuesta=='s'|| respuesta=='S'){
	
		cout<<"Deseaa ingresar otro valor (s/n) ";
		cin>>respuesta;
    }
   system("pause");
}

