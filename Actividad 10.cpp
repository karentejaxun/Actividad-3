#include <iostream>
using namespace std;
const char *nombre_archivo = "notas.dat";
struct Estudiante{
	int Cod; 
	char nombres[50]; 
	char apellidos[50];
	int nota;
};
void Leer();
void Crear();
void Actualizar();
void Borrar();
main(){
	Leer();
	Crear();
	Actualizar();
	Borrar();
	system("pause");
}
void Leer(){
	system("cls");
	FILE* archivo = fopen(nombre_archivo,"rb");
	if(!archivo){
		archivo = fopen(nombre_archivo,"w+b");
	}
	Estudiante estudiante;
	int id=0; 
	fread(&estudiante,sizeof(Estudiante),1,archivo);
	cout<<"_______________________________________"<<endl;
	cout<<"ID"<<"|"<<"Cod"<<"|"<<"   Nombres   "<<"|"<<"   Apellidos   "<<"|"<<"Nota"<<endl;
	do{
		cout<<id<<"|"<<estudiante.Cod<<"|"<<estudiante.nombres<<"|"<<estudiante.apellidos<<"|"<<estudiante.nota<<endl;
		fread(&estudiante,sizeof(Estudiante),1,archivo);
		id+=1;
	}while(feof(archivo)==0);
	fclose(archivo);
}
void Crear(){

	FILE* archivo = fopen(nombre_archivo,"a+b");
    char resp;
    Estudiante estudiante;
	do{
        fflush(stdin);
        cout<<"Ingrese id del estudiante:";
		cin>>estudiante.Cod;
		cin.ignore();
		
		cout<<"Ingrese Nombres:";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos:";
		cin.getline(estudiante.apellidos,50);
		
		
		cout<<"Ingrese notas:";
		cin>>estudiante.nota;

	
		fwrite(&estudiante,sizeof(Estudiante),1,archivo);
	    cout<<"Desea ingresar otro estudiante(s/n):";
		cin>>resp;	
	}while(resp=='s' || resp=='S');
	fclose(archivo);
	Leer();
}
void Actualizar(){
	FILE* archivo = fopen(nombre_archivo,"r+b");
    Estudiante estudiante;
    int id=0;
    fseek(archivo,id * sizeof(Estudiante),SEEK_SET);
    cout<<"Ingrese el ID que desea Modificar:";
    cin>>id;
        cout<<"Ingrese id del estudiante:";
		cin>>estudiante.Cod;
		cin.ignore();
		
		cout<<"Ingrese Nombres:";
		cin.getline(estudiante.nombres,50);
		
		cout<<"Ingrese Apellidos:";
		cin.getline(estudiante.apellidos,50);
		
		
		cout<<"Ingrese notas:";
		cin>>estudiante.nota;
   
    fwrite(&estudiante,sizeof(Estudiante),1,archivo);
	fclose(archivo);
	Leer();
}
void Borrar(){
	const char *nombre_archivo_temp = "notas_temp.dat";
	FILE* archivo_temp = fopen(nombre_archivo_temp,"w+b");
	FILE* archivo = fopen(nombre_archivo,"rb");
	Estudiante estudiante;
	int id=0,id_n=0;
	cout<<"Ingrese el ID a eliminar:";
    cin>>id;
    while(fread(&estudiante,sizeof(Estudiante),1,archivo)){
    	if(id_n!=id)
    	   fwrite(&estudiante,sizeof(Estudiante),1,archivo_temp);
    	id_n++;
	}
    fclose(archivo);
    fclose(archivo_temp);
    
    archivo_temp = fopen(nombre_archivo_temp,"rb");
    archivo = fopen(nombre_archivo,"wb");
    while(fread(&estudiante,sizeof(Estudiante),1,archivo_temp)){
    fwrite(&estudiante,sizeof(Estudiante),1,archivo);
    }
    fclose(archivo);
    fclose(archivo_temp);
    Leer();
}
