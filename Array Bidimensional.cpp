#include <iostream>
using namespace std;

main(){
	//ARREGLOS BIDIMENSIONALES,MATRIZ,TABLA
    //Se puede hacer un for 
    int fil=0,col=0;
    cout<<"Ingrese Filas: ";
    cin>>fil;
	cout<<"Ingrese Columnas: ";
    cin>>col;
    int matriz[fil][col];
   cout<<"---------------Ingresar--------"<<endl;
    for(int i=0;i<fil;i++){
    	for(int ii=0;ii<col;ii++){
    		cout<<i<<","<<ii<<":";
    		cin>>matriz[i][ii];
		}
		cout<<"___________________"<<endl;
	}
    cout<<"---------------Mostrar--------"<<endl;
    for(int i=0;i<fil;i++){
    	for(int ii=0;ii<col;ii++){
    		cout<<i<<","<<ii<<":"<<matriz[i][ii]<<endl;
		}
	}
	
	//int matriz[2][3]={{10,20,30},{40,50,60}};
	/*cout<<"0,0: "<<matriz[0][0]<<endl;
	cout<<"0,1: "<<matriz[0][1]<<endl;
	cout<<"0,2: "<<matriz[0][2]<<endl;
	cout<<"1,0: "<<matriz[1][0]<<endl;
	cout<<"1,1: "<<matriz[1][1]<<endl;
	cout<<"1,2: "<<matriz[1][2]<<endl;*/
	

	 
	system("pause");
}
