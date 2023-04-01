#include <iostream>
using namespace std;
main (){
	string nombre;
	string apellido;
	int estudiante=0;
	int codigo;
	int tamanio=0,tamanio2=0,suma=0,promedio=0;

	cout<<"INGRESO DE DATOS"<<endl;
	cout<<"Cuantas estudiantes desea ingresar al sistema: "<<endl;
	cin>>tamanio;
	int datos[tamanio];
	   
	   	 for (int i=0;i<tamanio;i++){
	   	 	
	    cout<<"Ingrese el codigo del estudiante: ";
	    cin>>codigo;
	 	cin.ignore();
	 	
		cout<<"Ingrese Nombre "<<i+1<<":";
	 	cin>>nombre[i];
	 	getline(cin,nombre);
	    cin.ignore();
	    
       	cout<<"Ingrese Apellidos: ";
	    cin>>apellido[i];
	    getline(cin,apellido);
	    
	    
	     	cout<<"INGRESANDO NOTAS"<<endl;
			cout<<"Cuantas notas desea ingresar al sistema: "<<endl;
	        cin>>tamanio2;	
            int notas[tamanio2];
	
        	for (int i=0;i<tamanio2;i++){ 
	 	    cout<<"Ingrese Nota "<<i+1<<":";
	 	    cin>>notas[i];
	        }
	 
            for (int i=0;i<tamanio2;i++){
	 	    suma +=notas[i]; //suma = suma + notas[i]
	        }
	        promedio = suma / tamanio2;
	     
	        cout<<"MOSTRANDO DATOS"<<endl;
	        cout<<"________________"<<endl;
			cout<<"El promedio es: "<<promedio<<endl;
	    	cout<<"Codigo o Id: "<<codigo<<endl;
         	cout<<"Nombres: "<<nombre<<endl;
          	cout<<"Apellidos: "<<apellido<<endl;
          	cout<<"________________"<<endl;
	          if(promedio>60)
	         {
	 	      cout<<"APROBADO"<<endl;
	         }
             else
             {
     	      cout<<"REPROBADO"<<endl;
	         }
		
		}
	    


system("pause");
}

