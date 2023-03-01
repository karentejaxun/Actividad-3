/*Universidad Mariano Galvez de Guatemala
  Programacion 1
  Karen Tejaxun 1290-22-13292
*/
#include <iostream>
using namespace std;
main(){
	//1.numero es positivo>0 o negativo<0
	int num=0;
	cout<<"ingrese un valor"<<endl;
	cin>>num;
	if(num>0){
	    //ingresa aca cuando la condicion es verdadera 
		cout<<"positivo"<<endl;
			
	}
	else
	{
		//anidar estructuras
		if (num==0){
			cout<<"neutro"<<endl;
		}
		else
		{
		    cout<<"negativo"<<endl;
		}
		
	}
	
	//2.condicion de paises
		
	
	string pais="";
	cout<<"ingrese pais:";
	cin>>pais;
	if(pais=="guatemala"){
		cout<<"yo soy de "<<pais<<" mi pais"<<endl;
	}
	else
	{
		cout<<pais<<endl;
	}
     
     
    //3. determinar si un numero es par o impar 
    
    cout<<"Ingrese Numero: ";
    cin>>num;
    //dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
    if ((num%2)==0){
    	cout<<"Par "<<endl;	
	}
	else
	{
		cout<<"Impar "<<endl;
	}
    
    //4.programa o ejemplo 
    
    // and (y) &&
    // or (o) ||
    
	// puede entrar a mi calse si usted trae un lapiz y un lapicero
    //and = inddica que el valor es verdadero si ambas son verdaderas
     //ejemplo or(o) = el valor es verdadero si por lo menos una es verdadera
      // puede entrar a mi calse si usted trae un lapiz o un lapicero
  
    
	char lapiz, lapicero,cuaderno;
    cout<<"Trae Lapiz (s/n):";
    cin>>lapiz;
    cout<<"Trae Lapicero (s/n):";
    cin>>lapicero;
    cout<<"Trae cuaderno (s/n):";
    cin>>cuaderno;
    
    if((lapiz=='s' || lapicero=='s') && cuaderno =='s' ){
    	cout<<"Ingresa"<<endl; 	
	}
	else
	{
		cout<<"lo siento no puede Ingresar"<<endl;
	}
	
	//5.codigo area 
    /*int codigo=0;
    cout<<"ingrese codigo area:";
    cin>>codigo;
    if(codigo==502){
    	cout<<"Guatemala"<<endl;	
	}
	  if(codigo==503){
		cout<<"El Salvador"<<endl;
    	}
    	if(codigo==504){
    		cout<<"Honduras"<<endl;
		}
		if(codigo==505){
			cout<<"Nicaragua"<<endl;
		} */
	
	//6.ejemplo switch
  int codigo=0;
  cout<<"ingrese codigo area:";
  cin>>codigo;
  switch(codigo){
  case 501 : cout<<"Belice"<<endl;
   break;
  case 502 : cout<<"Guatemala"<<endl;
   break;
  case 503 : cout<<"El Salvador"<<endl;
   break;
  case 504 : cout<<"Honduras"<<endl;
   break;
  case 505 : cout<<"Nicaragua"<<endl;
   break;
  case 506 : cout<<"Costa Rica"<<endl;
   break; 
  case 507 : cout<<"Panama"<<endl;
   break; 
    
  default :
      cout<<"Este codigo no es centroamerica";
  }

	//ambito general	
	system("pause");
}
