#include <iostream>
using namespace std;
const char *nombre_archivo = "archivo_notas.dat";
struct Notas{
	int ID;
	char nombres[50];
	char apellidos[50];
	int nota;
};
void Leer();
void Crear();
main() {
	
	Leer();
	Crear();
	system("pause");
}
void Leer(){
	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
	if(!archivo){
	   archivo = fopen(nombre_archivo,"w+b");
	}
	Notas notas;
	int id=0;
	fread(&notas,sizeof(Notas),1,archivo);
	cout<<"_________________________________________________"<<endl;
	cout<<" id "<<"|"<<" Codigo "<<"|"<<" Nombres "<<"|"<<"Apellidos"<<"|"<<" Notas "<<endl;
    do{
        cout<<id<<"|"<<notas.ID<<"|"<<notas.nombres<<"|"<<notas.apellidos<<"|"<<notas.nota<<endl;
		fread(&notas,sizeof(Notas),1,archivo);
		id+=1;
	}while(feof(archivo)==0);
	fclose(archivo);
}
void Crear(){
	FILE* archivo = fopen(nombre_archivo,"a+b");
	char res;
	int tamanio=0,suma=0,promedio=0;
	char resultado;
	Notas notas;
	do{
		fflush(stdin);
		cout<<"Ingrese el Codigo o Id:";
		cin>>notas.ID;
		cin.ignore();
		
		cout<<"Ingrese Nombres:";
		cin.getline(notas.nombres,50);
		
		cout<<"Ingrese Apellidos:";
		cin.getline(notas.apellidos,50);
		
		cout<<"Ingrese Nota:";
		cin>>notas.nota;
		
		
		//cout<<"Ingrese una nota unicamente:";
		//cin>>tamanio;
		//int nota[tamanio];
		
		/*for (int i=0;i<tamanio;i++){ 
	 	    cout<<"Ingrese Nota "<<i+1<<":";
	 	    cin>>nota[i];
	        }
	 
            for (int i=0;i<tamanio;i++){
	 	    suma +=nota[i]; //suma = suma + notas[i]
	        }
	        promedio = suma / tamanio;*/
		    
		    /*resultado = promedio;
			if(resultado>60)
	         {
	 	      cout<<"APROBADO"<<endl;
	         }
             else
             {
     	      cout<<"REPROBADO"<<endl;
	         }*/
	         
		fwrite(&notas,sizeof(Notas),1,archivo);
		cout<<"Desea ingresar otro estudiant(s/n):";
		cin>>res;
	}while(res=='s'||res=='S');
	fclose(archivo);
	Leer();
}
