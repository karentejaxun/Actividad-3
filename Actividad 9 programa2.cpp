#include <iostream>
using namespace std;
main() {
	int fil=0,col=0,**pm_notas;
	int suma=0,promedio=0,datos=0;
	char **nombre_completo;
	cout<<"Ingrese la cantidad de Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas por estudiante: ";
	cin>>col;
	
	nombre_completo = new char * [fil];
	for(int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
		cout<<"Nombres"<<i<<endl;
		cin>>nombre_completo[i];
	   }
	}
	
	
	pm_notas = new int * [fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	 }
	 for (int i=0;i<fil;i++){
		 
		  cout<<"_________Estudiante_________"<<i<<endl;
	 	for(int ii=0;ii<col;ii++){
	
			cout<<"Nota:"<<ii<<":";
	 		cin>>*(*(pm_notas+i)+ii);
	 		
	 		
		 }
		 cout<<"__________________"<<endl;
	 }
	 cout<<"-------------- Mostrar Notas -----------"<<endl;
	  for (int i=0;i<fil;i++){
	  	
	 	for(int ii=0;ii<col;ii++){
	 		cout<<*(*(pm_notas+i)+ii)<<endl;
	 		
		 }
	  cout<<"__________________________"<<endl;	 
	 }

    for(int i=0;i<fil;i++){
        delete [] pm_notas[i];
    }
    delete[] pm_notas;
	
	system("pause");
}

