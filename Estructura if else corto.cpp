#include <iostream>
using namespace std;
main(){
	int n1=0,n2=0,n3=0,promedio=0;
	cout<<"ingrese nota 1:";
	cin>>n1;
	cout<<"ingrese nota 2:";
	cin>>n2;
	cout<<"ingrese nota 3:";
	cin>>n3;
	promedio = (n1+n2+n3) / 3;
	cout<<promedio<<endl;
	string mensaje="";
	mensaje = promedio>=61 ? "Aprobado" : "Reprobado";
	cout<<"El promedio del estudiantes es: "<<promedio<<"por lo tanto "<<mensaje<<endl;
	
	
	if(promedio>=0 && promedio<61){
		cout<<"Mala Nota"<<endl;
	}
	if(promedio>=61 && promedio<81){
		cout<<"Buena Nota"<<endl;
	}
	if(promedio>=81){
		cout<<"Excelente Nota"<<endl;
	}
	
	/*if(promedio>=61){
		cout<<"Aprobo"<<endl;
	}
	else
	{
		cout<<"Reprobo"<<endl;
	}
	*/
	
	system("pause");
}
