#include <iostream>
using namespace std;
const char *nombre_archivo = "archivo.dat";
struct Estudiante{
	int codigo;
	char nombres[50];
	char apellidos[50];
	int telefono;
};
void Crear();
void Leer();
void Actualizar();
void Borrar();
main (){
	// c >> c++
	//Archivos para poder almacer datos 
    Leer();
    Crear();
    Borrar();
    Actualizar();
	system("pause");
}

void Leer(){
   system("cls");
   FILE* archivo = fopen(nombre_archivo,"rb");	
   if(!archivo){
   	archivo = fopen(nombre_archivo,"w+b");	
   }
   Estudiante estudiante;
   int id=0; //IMPORTANTE son los que determinan el indice o la posicion donde se encuentra el registro
             //indice o posicion del registro(fila) dentro del archivo
   fread(&estudiante,sizeof(Estudiante),1,archivo);
   cout<<"______________________________________________"<<endl;
   cout<<" Id "<<"|"<<"Codigo "<<"|"<<" Nombres "<<"|"<<" Apellidos "<<"|"<<" Telefono "<<endl;
   do{
   	  cout<<id<<"|"<<estudiante.codigo<<"|"<<estudiante.nombres<<"|"<<estudiante.apellidos<<"|"<<estudiante.telefono<<endl;
   	     fread(&estudiante,sizeof(Estudiante),1,archivo);
		 id+=1;
   }while(feof(archivo)==0);
   fclose(archivo);
    
}
//C (crear)
void Crear(){
	FILE* archivo = fopen(nombre_archivo,"a+b");
	char res;
	Estudiante estudiante; 
	do{
		fflush(stdin);
		cout<<"Ingrese Codigo: ";
		cin>>estudiante.codigo;
		cin.ignore();
		
		cout<<"Ingrese Nombres: ";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos: ";
		cin.getline(estudiante.apellidos,50);
		
		cout<<"Ingrese Telefono: ";
		cin>>estudiante.telefono;
	
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		cout<<"desea ingresar otro estudiante(s/n): ";
		cin>>res;
	}while(res=='s'||res=='S'); 
	fclose(archivo);
	Leer();
}
void Actualizar(){
	
	FILE* archivo = fopen(nombre_archivo,"r+b");//sobre escribe 
	int id=0;
	cout<<"Ingrese el ID que desea Modificar: ";
	cin>>id;
	fseek(archivo,id * sizeof(Estudiante),SEEK_SET);
	
	Estudiante estudiante; 
		cout<<"Ingrese Codigo: ";
		cin>>estudiante.codigo;
		cin.ignore();
		
		cout<<"Ingrese Nombres: ";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos: ";
		cin.getline(estudiante.apellidos,50);
		
		cout<<"Ingrese Telefono: ";
		cin>>estudiante.telefono;
	
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
		 
	fclose(archivo);
	Leer();
}
void Borrar(){
	const char *nombre_archivo_temp = "archivo_temp.dat";
	FILE* archivo_temp = fopen(nombre_archivo_temp,"w+b");
    FILE* archivo = fopen(nombre_archivo,"rb");
	Estudiante estudiante;
	int id=0,id_n=0;
	cout<<"ingrese el Id a Eliminar: ";
	cin>>id;
	while( fread(&estudiante,sizeof(Estudiante),1,archivo)){
		if (id_n !=id){
		    fwrite(&estudiante,sizeof(Estudiante),1,archivo_temp);
		}
		id_n++;
	}
	fclose(archivo);
	fclose(archivo_temp);
	
	archivo_temp = fopen(nombre_archivo_temp,"rb");
    archivo = fopen(nombre_archivo,"w+b");
    while( fread(&estudiante,sizeof(Estudiante),1,archivo_temp)){
          fwrite(&estudiante,sizeof(Estudiante),1,archivo);
	}
	fclose(archivo);
	fclose(archivo_temp);
	Leer();
}


