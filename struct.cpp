#include <iostream>
using namespace std;

/*struct Estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
};

int main(){
	
	Estudiante estudiante;
	for(int i=0;i<4;i++){
		cout<<"__________________"<<endl;
		cout<<"Ingrese codigo: ";
		cin>>estudiante.codigo[i];
		cin.ignore();
		cout<<"Ingrese Nombre Completo: ";
		getline(cin,estudiante.nombre[i]);
		cout<<"Ingrese Nota: ";
		cin>>estudiante.nota[i];	
	}
	
	for(int i=0;i<4;i++){
		cout<<"___________________"<<endl;
		cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
		cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
		cout<<"Nota: "<<estudiante.nota[i]<<endl;
	}
	
	
	system("pause");
}*/

struct Estudiante{
	int *codigo;
	string *nombre;
	int **nota;
};

main (){
	Estudiante estudiante;
	int fila = 0,columna = 0;
	cout<<"Cuantos Estudiantes desea Agregar: "; cin>>fila;
	cout<<"Cuantos Notas por Estudiante desea Agregar: "; cin>>columna;
 
    estudiante.codigo = new int[fila];
    estudiante.nombre = new string[fila];
    estudiante.nota = new int *[fila];
    for(int i=0;i<fila;i++){
    	estudiante.nota[i] = new int[columna];
	}
	cout<<"______________________Ingreso de Notas _________________"<<endl;
	for(int i=0;i<fila;i++){
		    cout<<"Codigo["<<i<<"]:";
			cin>>estudiante.codigo[i];
			cin.ignore();
			cout<<"Nombre completo["<<i<<"]:";
			getline(cin,estudiante.nombre[i]);
		for(int ii=0;ii<columna;ii++){
		    cout<<"Ingrese Nota["<<i<<"] :";
			cin>>*(*(estudiante.nota+i)+ii);
		}
		cout<<"__________________________"<<endl;
	}
	    
    cout<<"Mostrar Datos "<<endl;
    
	for(int i=0;i<fila;i++){
		    cout<<"Codigo["<<i<<"]:"<<estudiante.codigo[i]<<endl;
			cin.ignore();
			cout<<"Nombre completo["<<i<<"]:"<<estudiante.nombre[i]<<endl;
	   for(int ii=0;ii<columna;ii++){
		    cout<<"Ingrese Nota["<<i<<"] :"<<*(*(estudiante.nota+i)+ii)<<endl;
		}
		cout<<"__________________________"<<endl;
	}

    for(int i=0;i<fila;i++){
    	delete[] estudiante.nota[i];
	}
	 delete[] estudiante.codigo;
     delete[] estudiante.nombre;
     delete[] estudiante.nota;
     
system("pause");
}






	

